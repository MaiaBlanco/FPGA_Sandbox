; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@matrix_mult_str = internal unnamed_addr constant [12 x i8] c"matrix_mult\00"
@p_str2 = private unnamed_addr constant [8 x i8] c"Product\00", align 1
@p_str1 = private unnamed_addr constant [4 x i8] c"Col\00", align 1
@p_str = private unnamed_addr constant [4 x i8] c"Row\00", align 1

define void @matrix_mult([25 x i8]* %a, [25 x i8]* %b, [25 x i16]* %prod) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %a) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %b) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i16]* %prod) nounwind, !map !17
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @matrix_mult_str) nounwind
  br label %1

; <label>:1                                       ; preds = %8, %0
  %i = phi i3 [ 0, %0 ], [ %i_1, %8 ]
  %i_cast3_cast = zext i3 %i to i6
  %tmp_6 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %i, i2 0)
  %p_shl_cast = zext i5 %tmp_6 to i6
  %tmp_7 = add i6 %i_cast3_cast, %p_shl_cast
  %exitcond2 = icmp eq i3 %i, -3
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind
  %i_1 = add i3 %i, 1
  br i1 %exitcond2, label %9, label %2

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str) nounwind
  %tmp_4 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str) nounwind
  br label %3

; <label>:3                                       ; preds = %7, %2
  %j = phi i3 [ 0, %2 ], [ %j_1, %7 ]
  %j_cast2_cast = zext i3 %j to i6
  %tmp_8 = add i6 %tmp_7, %j_cast2_cast
  %tmp_8_cast = zext i6 %tmp_8 to i32
  %prod_addr = getelementptr [25 x i16]* %prod, i32 0, i32 %tmp_8_cast
  %exitcond1 = icmp eq i3 %j, -3
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind
  %j_1 = add i3 %j, 1
  br i1 %exitcond1, label %8, label %4

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind
  br label %5

; <label>:5                                       ; preds = %6, %4
  %prod_load = phi i16 [ 0, %4 ], [ %tmp_3, %6 ]
  %k = phi i3 [ 0, %4 ], [ %k_1, %6 ]
  store i16 %prod_load, i16* %prod_addr, align 2
  %k_cast1_cast = zext i3 %k to i6
  %tmp_9 = add i6 %tmp_7, %k_cast1_cast
  %tmp_9_cast = zext i6 %tmp_9 to i32
  %a_addr = getelementptr [25 x i8]* %a, i32 0, i32 %tmp_9_cast
  %tmp_s = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %k, i2 0)
  %p_shl1_cast = zext i5 %tmp_s to i6
  %tmp_10 = add i6 %k_cast1_cast, %p_shl1_cast
  %tmp_11 = add i6 %tmp_10, %j_cast2_cast
  %tmp_12_cast = zext i6 %tmp_11 to i32
  %b_addr = getelementptr [25 x i8]* %b, i32 0, i32 %tmp_12_cast
  %exitcond = icmp eq i3 %k, -3
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind
  %k_1 = add i3 %k, 1
  br i1 %exitcond, label %7, label %6

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName([8 x i8]* @p_str2) nounwind
  %a_load = load i8* %a_addr, align 1
  %tmp = sext i8 %a_load to i16
  %b_load = load i8* %b_addr, align 1
  %tmp_1 = sext i8 %b_load to i16
  %tmp_2 = mul i16 %tmp_1, %tmp
  %tmp_3 = add i16 %prod_load, %tmp_2
  br label %5

; <label>:7                                       ; preds = %5
  %empty_4 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_5) nounwind
  br label %3

; <label>:8                                       ; preds = %3
  %empty_5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str, i32 %tmp_4) nounwind
  br label %1

; <label>:9                                       ; preds = %1
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5
  %empty_6 = zext i2 %1 to i5
  %empty_7 = shl i5 %empty, 2
  %empty_8 = or i5 %empty_7, %empty_6
  ret i5 %empty_8
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"mat_a [5]*", metadata !"mat_b [5]*", metadata !"mat_prod [5]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"prod"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 7, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"a", metadata !11, metadata !"char", i32 0, i32 7}
!11 = metadata !{metadata !12, metadata !12}
!12 = metadata !{i32 0, i32 4, i32 1}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 7, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"b", metadata !11, metadata !"char", i32 0, i32 7}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 0, i32 15, metadata !19}
!19 = metadata !{metadata !20}
!20 = metadata !{metadata !"prod", metadata !11, metadata !"short", i32 0, i32 15}
