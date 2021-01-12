// type response;

// // [@bs.module] external fetch: string => Promise.t(response) = "node-fetch";

// [@bs.send] external text: response => Promise.t(string) = "text";
let () = Js.log("Hello, BuckleScript");

let foo = hasMethodBar => hasMethodBar#@bar();

// foo({"baz": [@bs] (() => "fails to compile!")});
let fakeNames =
  Belt.Array.(range(0, 100)->(map(_i => Random.int(3000) |> string_of_int)));
//
let fakePromise = name =>
  Js.Promise.make((~resolve, ~reject as _) =>
    Js.Global.setTimeout(() => resolve(. name), 50) |> ignore
  );

foo({"bar": (.) => "works"}) |> Js.log;

let foos = (string, hasMethodBar) => hasMethodBar#@bar(string, Js.Promise.resolve());

foos("works2", {"bar": (. string, Js.Promise.resolve()) => "works" ++ string}) |> Js.log;
// let nodeFetch = "node-fetch";
type xmlhttprequest
type request;
// type response('a)=Js.Promise.t('a);
type response;
let fetch = (url, xmlhttprequest) => xmlhttprequest#@request(url, Js.Promise.resolve(()));

fetch("https://raw.githubusercontent.com/aantron/promise/master/README.md", {"request": (. string, Js.Promise.resolve())  => string}) |> Js.log;
