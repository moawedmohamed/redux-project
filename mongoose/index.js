import mongoose from "mongoose";
import dotenv from "dotenv";
import { User } from "./user.js";
dotenv.config();

// const user = new User({
//   name: "Ahmed Mohamed",
//   age: 25,
//   email: "ahmed@example.com",
//   password: "123456",
// });

const run = async () => {
  try {
    // const user = await User.deleteOne({ name: "moawed" });
    // const user = await User.find();
    // const ahmed = await User.findOne({ name: "ahmed" });
    // const ali = await User.findOne({ name: "ali" });
    // ahmed.bestFriend = ali._id;
    // const friends = await ahmed.populate("bestFriend");
    // console.log(friends);
    // const user = await User.findOne({ name: "moawed" });
    // const user = await User.find().byName("ahmed");
    const user = await User.findOne({
      name: "ahmed",
      // email: "ahmed@gmail.com",
    });
    console.log(user);
    await user.save();
    console.log(user);
    console.log(user.namedEmail);
  } catch (error) {
    console.log(error.message);
  }
};
run();
mongoose
  .connect(process.env.CONNECTION_STRING)
  .then(() => console.log("connected to mongodb atlas "))
  .catch((e) => console.log(e));
