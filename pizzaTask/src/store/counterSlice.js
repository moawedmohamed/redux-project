import { createSlice } from "@reduxjs/toolkit";
const initialState = { value: 0, name: "ahmed" };
export const counterSlice = createSlice({
  name: "counter",
  initialState,
  reducers: {
    addOne: (state) => {
      state.value += 1
      //   this.state.value += 1;
    },
    minsOne: (state) => {
      state.value -= 1;
    },
    setName: (state, action) => {
      state.name = action.payload;
    },
  },
});

export const { addOne, minsOne, setName } = counterSlice.actions;
export default counterSlice.reducer;
