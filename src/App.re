open BsReactNative;

/* here we define some styles */
module Styles = {
  open Style;

  let container =
    style([
      flex(1.),
      justifyContent(Center),
      alignItems(Center),
      backgroundColor(String("tomato")),
    ]);

  let text = style([color(String("#fff")), fontSize(Float(24.))]);
};

module Main = {
  let component = ReasonReact.statelessComponent("Main");

  let make = _children => {
    ...component,
    render: _self =>
      <View style=Styles.container>
        <Text style=Styles.text>
          (ReasonReact.string("Let's play with ReasonML!"))
        </Text>
      </View>,
  };
};

let app = () => <Main />;