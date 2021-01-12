let foo = hasMethodBar => hasMethodBar#@bar();

foo({"bar": (.) => "works"}) |> Js.log;

let foos =(string, hasMethodBar) => hasMethodBar#@bar(string)();

foos("works2",{"bar": (. string,()) => "works" ++ string}) |> Js.log;
