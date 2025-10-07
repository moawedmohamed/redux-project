import { createAsyncThunk, createSlice } from "@reduxjs/toolkit";
import axios from "axios";
import { getAllPosts } from "../api/postApi";
const initialState = { posts: [], isLoading: false, error: null };

const postSlice = createSlice({
  name: "post",
  initialState,
  reducers: {},
  extraReducers: (builder) => {
    builder.addCase(getAllPosts.pending, (state, action) => {
      state.isLoading = true;
      state.error = null;
      console.log("pending", action);
    });
    builder.addCase(getAllPosts.fulfilled, (state, action) => {
      state.posts = action.payload;
      state.isLoading = false;
      state.error = null;
      console.log("fulfilled", action);
    });
    builder.addCase(getAllPosts.rejected, (state, action) => {
      state.isLoading = false;
      state.error = action?.error?.message;
      console.log("rejected", action);
    });
  },
});
// export { getAllPosts }=postSlice.actions;
export default postSlice.reducer;
