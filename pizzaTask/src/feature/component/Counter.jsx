import React from "react";
import { addOne, minsOne } from "../../store/counterSlice";

const Counter = () => {
  const [count, setCount] = React.useState(0);
  return (
    <div
      style={{
        display: "flex",
        gap: "10px",
        justifyContent: "center",
        alignItems: "center",
      }}
    >
      <button
        onClick={() => {
          addOne((prev) => prev + 1);
        }}
      >
        +
      </button>
      <button>{count}</button>
      <button
        onClick={() => {
          minsOne((prev) => prev - 1);
        }}
      >
        -
      </button>
      <input type="text" />
    </div>
  );
};

export default Counter;
