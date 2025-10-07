import { configureStore } from "@reduxjs/toolkit";
import counterReducer from "./counterSlice";
import postReducer from "../post/postSlice";
export const store = configureStore({
  reducer: {
    // Add your reducers here
    counter: counterReducer,
    postdata: postReducer,
  },
  // devTools: fals,
});
