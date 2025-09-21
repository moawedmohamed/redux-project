import mongoose from "mongoose";

const userSchema = new mongoose.Schema({
  name: { type: String, required: true },
  age: { type: Number, min: 0, max: 100 },
  email: {
    type: String,
    require: true,
    unique: true,
    minLength: 10,
    match: /[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$/,
    lowercase: true,
  },
  password: { type: String, required: true },
  createdAt: { type: Date, default: Date.now, immutable: true },
  updatedAt: { type: Date, default: Date.now },
  bestFriend: { type: mongoose.SchemaTypes.ObjectId, ref: "User" },
  hobbies: [String],
  address: {
    city: String,
    street: String,
  },
});

userSchema.statics.findByName = function (name) {
  return this.find({ name: new RegExp(name, "i") });
};
userSchema.query.byName = function (name) {
  return this.where({ name: new RegExp(name, "i") });
};
userSchema.virtual("namedEmail").get(function () {
  return `${this.name} <${this.email}>`;
});
userSchema.pre("save", function (next) {
  this.updatedAt = Date.now();
  next()
});
export const User = mongoose.model("User", userSchema);
