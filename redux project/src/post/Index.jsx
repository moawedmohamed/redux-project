import axios from "axios";
import { useState } from "react";
import { useEffect } from "react";
import { useSelector } from "react-redux";
import { useDispatch } from "react-redux";
import { getAllPosts } from "../api/postApi";

const Index = () => {
  const dispatch = useDispatch();
  const posts = useSelector((state) => state.postdata.posts);
  const isLoading = useSelector((state) => state.postdata.isLoading);
  const isError = useSelector((state) => state.postdata.error);
  useEffect(() => {
    dispatch(getAllPosts());
  }, [dispatch]);
  console.log(posts);

  return (
    <div>
      {isLoading && <h1>Loading...</h1>}
      {isError ? <h1>{isError}</h1> : ""}
      {posts?.length >= 1 &&
        posts.map((post) => {
          return (
            <div key={post.id} style={{ marginBottom: "20px" }}>
              <h3>{post.title}</h3>
              <p>{post.body}</p>
              <hr />
            </div>
          );
        })}
    </div>
  );
};

export default Index;
