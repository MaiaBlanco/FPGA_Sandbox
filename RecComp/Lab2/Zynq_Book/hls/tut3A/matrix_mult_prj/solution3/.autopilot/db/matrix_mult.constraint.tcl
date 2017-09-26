set clock_constraint { \
    name clk \
    module matrix_mult \
    port ap_clk \
    period 5 \
    uncertainty 0.625 \
}

set all_path {}

set false_path {}

