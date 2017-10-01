<project xmlns="com.autoesl.autopilot.project" name="cnn_optimization" top="convolve_kernel">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0" compiler="true"/>
    </Simulation>
    <files xmlns="">
        <file name="../../main.cpp" sc="0" tb="1" cflags=" "/>
        <file name="../../data.cpp" sc="0" tb="1" cflags=" "/>
        <file name="../../convolve.cpp" sc="0" tb="1" cflags=" "/>
        <file name="kernel.h" sc="0" tb="false" cflags=""/>
        <file name="kernel.cpp" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="1_unroll_kernel_traversal" status="inactive"/>
        <solution name="0_default_implementation" status="inactive"/>
        <solution name="2_pipeline_1" status="inactive"/>
        <solution name="solution1_1" status="inactive"/>
        <solution name="solution1_2" status="inactive"/>
        <solution name="solution1_3" status="inactive"/>
        <solution name="solution1_4" status="inactive"/>
        <solution name="solution1_5" status="active"/>
    </solutions>
</project>

