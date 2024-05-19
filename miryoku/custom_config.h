// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
  combos {
    compatible = "zmk,combos";
    combo_ae {
      timeout - ms = <50>;
      key - positions = <3 13>;
      bindings = <&kp DE_A_UMLAUT>;
    };
    combo_oe {
      timeout - ms = <50>;
      key - positions = <9 3>;
      bindings = <&kp DE_O_UMLAUT>;
    };
    combo_ue {
      timeout - ms = <50>;
      key - positions = <3 7>;
      bindings = <&kp DE_U_UMLAUT>;
    };
    combo_cp {
      timeout - ms = <50>;
      key - positions = <27 28>;
      bindings = <&kp LC(DE_C)>;
    };
    combo_cut {
      timeout - ms = <50>;
      key - positions = <26 27>;
      bindings = <&kp LC(DE_X)>;
    };
    combo_pst {
      timeout - ms = <50>;
      key - positions = <28 29>;
      bindings = <&kp LC(DE_V)>;
    };
  };
};
