import React from "react";
import { addOne, minsOne, setName } from "../../store/counterSlice";
import { useDispatch } from "react-redux";
import { useSelector } from "react-redux";

const Counter = () => {
  const [name, setNameValue] = React.useState("");
  const dispatch = useDispatch();
  const data = useSelector((state) => state.counter);
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
          dispatch(addOne());
        }}
      >
        +
      </button>
      <button>{data?.value}</button>
      <button
        onClick={() => {
          dispatch(minsOne());
        }}
      >
        -
      </button>
      <input
        type="text"
        value={data?.name}
        // onChange={(e) => dispatch(setName(e.target.value))}
      />
      <button onClick={() => dispatch(setName(name))}>Set Name</button>
      <input
        type="text"
        placeholder="enter the name "
        value={name}
        onChange={(e) => setNameValue(e.target.value)}
      />
    </div>
  );
};

export default Counter;
