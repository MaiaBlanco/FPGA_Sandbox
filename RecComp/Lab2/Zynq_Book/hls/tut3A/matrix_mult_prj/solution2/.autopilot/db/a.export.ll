; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution2/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@matrix_mult_str = internal unnamed_addr constant [12 x i8] c"matrix_mult\00"
@Row_Col_str = internal unnamed_addr constant [8 x i8] c"Row_Col\00"
@p_str3 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str2 = private unnamed_addr constant [8 x i8] c"Product\00", align 1
@p_str1 = private unnamed_addr constant [4 x i8] c"Col\00", align 1

define void @matrix_mult([25 x i8]* %a, [25 x i8]* %b, [25 x i16]* %prod) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %a) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %b) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i16]* %prod) nounwind, !map !17
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @matrix_mult_str) nounwind
  br label %1

; <label>:1                                       ; preds = %3, %0
  %indvar_flatten = phi i5 [ 0, %0 ], [ %indvar_flatten_next, %3 ]
  %i = phi i3 [ 0, %0 ], [ %i_cast3_mid2_v, %3 ]
  %j = phi i3 [ 0, %0 ], [ %j_1, %3 ]
  %exitcond_flatten = icmp eq i5 %indvar_flatten, -7
  %indvar_flatten_next = add i5 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %4, label %.reset

; <label>:2                                       ; preds = %ifBlock, %.reset
  %k = phi i3 [ 0, %.reset ], [ %k_1, %ifBlock ]
  %exitcond = icmp eq i3 %k, -3
  %k_1 = add i3 %k, 1
  br i1 %exitcond, label %3, label %ifBlock

ifBlock:                                          ; preds = %2
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
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([8 x i8]* @p_str2) nounwind
  %tmp_6 = call i32 (...)* @_ssdm_op_SpecRegionBegin([8 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind
  %a_load = load i8* %a_addr, align 1
  %tmp = sext i8 %a_load to i16
  %b_load = load i8* %b_addr, align 1
  %tmp_1 = sext i8 %b_load to i16
  %tmp_2 = mul i16 %tmp, %tmp_1
  %prod_load = load i16* %prod_addr, align 2
  %tmp_3 = add i16 %tmp_2, %prod_load
  store i16 %tmp_3, i16* %prod_addr, align 2
  %empty_2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([8 x i8]* @p_str2, i32 %tmp_6) nounwind
  br label %2

; <label>:3                                       ; preds = %2
  %empty_3 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_5) nounwind
  %j_1 = add i3 %j_mid2, 1
  br label %1

.reset:                                           ; preds = %1
  %i_1 = add i3 %i, 1
  call void (...)* @_ssdm_op_SpecLoopName([8 x i8]* @Row_Col_str)
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 25, i64 25, i64 25) nounwind
  %exitcond1 = icmp eq i3 %j, -3
  %j_mid2 = select i1 %exitcond1, i3 0, i3 %j
  %i_cast3_mid2_v = select i1 %exitcond1, i3 %i_1, i3 %i
  %i_cast3_mid2_cast = zext i3 %i_cast3_mid2_v to i6
  %tmp_4 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %i_cast3_mid2_v, i2 0)
  %p_shl_cast = zext i5 %tmp_4 to i6
  %tmp_7 = add i6 %i_cast3_mid2_cast, %p_shl_cast
  %j_cast2_cast = zext i3 %j_mid2 to i6
  %tmp_8 = add i6 %tmp_7, %j_cast2_cast
  %tmp_8_cast = zext i6 %tmp_8 to i32
  %prod_addr = getelementptr [25 x i16]* %prod, i32 0, i32 %tmp_8_cast
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind
  store i16 0, i16* %prod_addr, align 2
  br label %2

; <label>:4                                       ; preds = %1
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

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
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
  %empty_5 = zext i2 %1 to i5
  %empty_6 = shl i5 %empty, 2
  %empty_7 = or i5 %empty_6, %empty_5
  ret i5 %empty_7
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
