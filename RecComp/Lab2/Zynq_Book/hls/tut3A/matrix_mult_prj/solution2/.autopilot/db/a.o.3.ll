; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution2/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@matrix_mult_str = internal unnamed_addr constant [12 x i8] c"matrix_mult\00" ; [#uses=1 type=[12 x i8]*]
@Row_Col_str = internal unnamed_addr constant [8 x i8] c"Row_Col\00" ; [#uses=1 type=[8 x i8]*]
@p_str3 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@p_str2 = private unnamed_addr constant [8 x i8] c"Product\00", align 1 ; [#uses=3 type=[8 x i8]*]
@p_str1 = private unnamed_addr constant [4 x i8] c"Col\00", align 1 ; [#uses=3 type=[4 x i8]*]

; [#uses=0]
define void @matrix_mult([25 x i8]* %a, [25 x i8]* %b, [25 x i16]* %prod) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %a) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %b) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i16]* %prod) nounwind, !map !17
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @matrix_mult_str) nounwind
  call void @llvm.dbg.value(metadata !{[25 x i8]* %a}, i64 0, metadata !21), !dbg !43 ; [debug line = 5:13] [debug variable = a]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %b}, i64 0, metadata !44), !dbg !46 ; [debug line = 6:13] [debug variable = b]
  call void @llvm.dbg.value(metadata !{[25 x i16]* %prod}, i64 0, metadata !47), !dbg !49 ; [debug line = 7:16] [debug variable = prod]
  br label %1, !dbg !50                           ; [debug line = 10:22]

; <label>:1                                       ; preds = %3, %0
  %indvar_flatten = phi i5 [ 0, %0 ], [ %indvar_flatten_next, %3 ] ; [#uses=2 type=i5]
  %i = phi i3 [ 0, %0 ], [ %i_cast3_mid2_v, %3 ]  ; [#uses=2 type=i3]
  %j = phi i3 [ 0, %0 ], [ %j_1, %3 ]             ; [#uses=2 type=i3]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !53), !dbg !55 ; [debug line = 10:31] [debug variable = i]
  %exitcond_flatten = icmp eq i5 %indvar_flatten, -7 ; [#uses=1 type=i1]
  %indvar_flatten_next = add i5 %indvar_flatten, 1 ; [#uses=1 type=i5]
  br i1 %exitcond_flatten, label %4, label %.reset

; <label>:2                                       ; preds = %.reset, %ifBlock
  %k = phi i3 [ 0, %.reset ], [ %k_1, %ifBlock ]  ; [#uses=4 type=i3]
  %exitcond = icmp eq i3 %k, -3, !dbg !56         ; [#uses=1 type=i1] [debug line = 15:32]
  %k_1 = add i3 %k, 1, !dbg !61                   ; [#uses=1 type=i3] [debug line = 15:41]
  br i1 %exitcond, label %3, label %ifBlock, !dbg !56 ; [debug line = 15:32]

ifBlock:                                          ; preds = %2
  %k_cast1_cast = zext i3 %k to i6, !dbg !62      ; [#uses=2 type=i6] [debug line = 16:13]
  %tmp_9 = add i6 %tmp_7, %k_cast1_cast, !dbg !62 ; [#uses=1 type=i6] [debug line = 16:13]
  %tmp_9_cast = zext i6 %tmp_9 to i32, !dbg !62   ; [#uses=1 type=i32] [debug line = 16:13]
  %a_addr = getelementptr [25 x i8]* %a, i32 0, i32 %tmp_9_cast, !dbg !62 ; [#uses=1 type=i8*] [debug line = 16:13]
  %tmp_s = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %k, i2 0) ; [#uses=1 type=i5]
  %p_shl1_cast = zext i5 %tmp_s to i6, !dbg !62   ; [#uses=1 type=i6] [debug line = 16:13]
  %tmp_10 = add i6 %k_cast1_cast, %p_shl1_cast, !dbg !62 ; [#uses=1 type=i6] [debug line = 16:13]
  %tmp_11 = add i6 %tmp_10, %j_cast2_cast, !dbg !62 ; [#uses=1 type=i6] [debug line = 16:13]
  %tmp_12_cast = zext i6 %tmp_11 to i32, !dbg !62 ; [#uses=1 type=i32] [debug line = 16:13]
  %b_addr = getelementptr [25 x i8]* %b, i32 0, i32 %tmp_12_cast, !dbg !62 ; [#uses=1 type=i8*] [debug line = 16:13]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([8 x i8]* @p_str2) nounwind, !dbg !64 ; [debug line = 15:47]
  %tmp_6 = call i32 (...)* @_ssdm_op_SpecRegionBegin([8 x i8]* @p_str2) nounwind, !dbg !64 ; [#uses=1 type=i32] [debug line = 15:47]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind, !dbg !65 ; [debug line = 16:1]
  %a_load = load i8* %a_addr, align 1, !dbg !62   ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp = sext i8 %a_load to i16, !dbg !62         ; [#uses=1 type=i16] [debug line = 16:13]
  %b_load = load i8* %b_addr, align 1, !dbg !62   ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp_1 = sext i8 %b_load to i16, !dbg !62       ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp_2 = mul i16 %tmp, %tmp_1, !dbg !62         ; [#uses=1 type=i16] [debug line = 16:13]
  %prod_load = load i16* %prod_addr, align 2, !dbg !62 ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp_3 = add i16 %tmp_2, %prod_load, !dbg !62   ; [#uses=1 type=i16] [debug line = 16:13]
  store i16 %tmp_3, i16* %prod_addr, align 2, !dbg !62 ; [debug line = 16:13]
  %empty_2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([8 x i8]* @p_str2, i32 %tmp_6) nounwind, !dbg !66 ; [#uses=0 type=i32] [debug line = 17:10]
  call void @llvm.dbg.value(metadata !{i3 %k_1}, i64 0, metadata !67), !dbg !61 ; [debug line = 15:41] [debug variable = k]
  br label %2

; <label>:3                                       ; preds = %2
  %empty_3 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_5) nounwind, !dbg !68 ; [#uses=0 type=i32] [debug line = 18:7]
  %j_1 = add i3 %j_mid2, 1, !dbg !69              ; [#uses=1 type=i3] [debug line = 12:34]
  call void @llvm.dbg.value(metadata !{i3 %j_1}, i64 0, metadata !70), !dbg !69 ; [debug line = 12:34] [debug variable = j]
  br label %1, !dbg !69                           ; [debug line = 12:34]

.reset:                                           ; preds = %1
  %i_1 = add i3 %i, 1, !dbg !55                   ; [#uses=1 type=i3] [debug line = 10:31]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !53), !dbg !55 ; [debug line = 10:31] [debug variable = i]
  call void (...)* @_ssdm_op_SpecLoopName([8 x i8]* @Row_Col_str)
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 25, i64 25, i64 25) nounwind ; [#uses=0 type=i32]
  %exitcond1 = icmp eq i3 %j, -3, !dbg !71        ; [#uses=2 type=i1] [debug line = 12:25]
  %j_mid2 = select i1 %exitcond1, i3 0, i3 %j     ; [#uses=2 type=i3]
  %i_cast3_mid2_v = select i1 %exitcond1, i3 %i_1, i3 %i, !dbg !50 ; [#uses=3 type=i3] [debug line = 10:22]
  %i_cast3_mid2_cast = zext i3 %i_cast3_mid2_v to i6 ; [#uses=1 type=i6]
  %tmp_4 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %i_cast3_mid2_v, i2 0) ; [#uses=1 type=i5]
  %p_shl_cast = zext i5 %tmp_4 to i6, !dbg !62    ; [#uses=1 type=i6] [debug line = 16:13]
  %tmp_7 = add i6 %i_cast3_mid2_cast, %p_shl_cast, !dbg !62 ; [#uses=2 type=i6] [debug line = 16:13]
  %j_cast2_cast = zext i3 %j_mid2 to i6, !dbg !72 ; [#uses=2 type=i6] [debug line = 13:10]
  %tmp_8 = add i6 %tmp_7, %j_cast2_cast, !dbg !72 ; [#uses=1 type=i6] [debug line = 13:10]
  %tmp_8_cast = zext i6 %tmp_8 to i32, !dbg !72   ; [#uses=1 type=i32] [debug line = 13:10]
  %prod_addr = getelementptr [25 x i16]* %prod, i32 0, i32 %tmp_8_cast, !dbg !72 ; [#uses=3 type=i16*] [debug line = 13:10]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind, !dbg !73 ; [debug line = 12:40]
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind, !dbg !73 ; [#uses=1 type=i32] [debug line = 12:40]
  store i16 0, i16* %prod_addr, align 2, !dbg !72 ; [debug line = 13:10]
  br label %2, !dbg !56                           ; [debug line = 15:32]

; <label>:4                                       ; preds = %1
  ret void, !dbg !74                              ; [debug line = 21:1]
}

; [#uses=7]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=2]
define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5                       ; [#uses=1 type=i5]
  %empty_5 = zext i2 %1 to i5                     ; [#uses=1 type=i5]
  %empty_6 = shl i5 %empty, 2                     ; [#uses=1 type=i5]
  %empty_7 = or i5 %empty_6, %empty_5             ; [#uses=1 type=i5]
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
!21 = metadata !{i32 786689, metadata !22, metadata !"a", null, i32 5, metadata !41, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!22 = metadata !{i32 786478, i32 0, metadata !23, metadata !"matrix_mult", metadata !"matrix_mult", metadata !"_Z11matrix_multPA5_cS0_PA5_s", metadata !23, i32 4, metadata !24, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !39, i32 8} ; [ DW_TAG_subprogram ]
!23 = metadata !{i32 786473, metadata !"matrix_mult.cpp", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5CZynq_Book\5Chls\5Ctut3A", null} ; [ DW_TAG_file_type ]
!24 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !25, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!25 = metadata !{null, metadata !26, metadata !32, metadata !35}
!26 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 40, i64 8, i32 0, i32 0, metadata !28, metadata !30, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{i32 786454, null, metadata !"mat_a", metadata !23, i32 15, i64 0, i64 0, i64 0, i32 0, metadata !29} ; [ DW_TAG_typedef ]
!29 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!30 = metadata !{metadata !31}
!31 = metadata !{i32 786465, i64 0, i64 4}        ; [ DW_TAG_subrange_type ]
!32 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !33} ; [ DW_TAG_pointer_type ]
!33 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 40, i64 8, i32 0, i32 0, metadata !34, metadata !30, i32 0, i32 0} ; [ DW_TAG_array_type ]
!34 = metadata !{i32 786454, null, metadata !"mat_b", metadata !23, i32 16, i64 0, i64 0, i64 0, i32 0, metadata !29} ; [ DW_TAG_typedef ]
!35 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !36} ; [ DW_TAG_pointer_type ]
!36 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 80, i64 16, i32 0, i32 0, metadata !37, metadata !30, i32 0, i32 0} ; [ DW_TAG_array_type ]
!37 = metadata !{i32 786454, null, metadata !"mat_prod", metadata !23, i32 17, i64 0, i64 0, i64 0, i32 0, metadata !38} ; [ DW_TAG_typedef ]
!38 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!39 = metadata !{metadata !40}
!40 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!41 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 200, i64 8, i32 0, i32 0, metadata !28, metadata !42, i32 0, i32 0} ; [ DW_TAG_array_type ]
!42 = metadata !{metadata !31, metadata !31}
!43 = metadata !{i32 5, i32 13, metadata !22, null}
!44 = metadata !{i32 786689, metadata !22, metadata !"b", null, i32 6, metadata !45, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 200, i64 8, i32 0, i32 0, metadata !34, metadata !42, i32 0, i32 0} ; [ DW_TAG_array_type ]
!46 = metadata !{i32 6, i32 13, metadata !22, null}
!47 = metadata !{i32 786689, metadata !22, metadata !"prod", null, i32 7, metadata !48, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!48 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 400, i64 16, i32 0, i32 0, metadata !37, metadata !42, i32 0, i32 0} ; [ DW_TAG_array_type ]
!49 = metadata !{i32 7, i32 16, metadata !22, null}
!50 = metadata !{i32 10, i32 22, metadata !51, null}
!51 = metadata !{i32 786443, metadata !52, i32 10, i32 9, metadata !23, i32 1} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 786443, metadata !22, i32 8, i32 1, metadata !23, i32 0} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 786688, metadata !51, metadata !"i", metadata !23, i32 10, metadata !54, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!54 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!55 = metadata !{i32 10, i32 31, metadata !51, null}
!56 = metadata !{i32 15, i32 32, metadata !57, null}
!57 = metadata !{i32 786443, metadata !58, i32 15, i32 19, metadata !23, i32 5} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786443, metadata !59, i32 12, i32 39, metadata !23, i32 4} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 786443, metadata !60, i32 12, i32 12, metadata !23, i32 3} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 786443, metadata !51, i32 10, i32 36, metadata !23, i32 2} ; [ DW_TAG_lexical_block ]
!61 = metadata !{i32 15, i32 41, metadata !57, null}
!62 = metadata !{i32 16, i32 13, metadata !63, null}
!63 = metadata !{i32 786443, metadata !57, i32 15, i32 46, metadata !23, i32 6} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 15, i32 47, metadata !63, null}
!65 = metadata !{i32 16, i32 1, metadata !63, null}
!66 = metadata !{i32 17, i32 10, metadata !63, null}
!67 = metadata !{i32 786688, metadata !57, metadata !"k", metadata !23, i32 15, metadata !54, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 18, i32 7, metadata !58, null}
!69 = metadata !{i32 12, i32 34, metadata !59, null}
!70 = metadata !{i32 786688, metadata !59, metadata !"j", metadata !23, i32 12, metadata !54, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!71 = metadata !{i32 12, i32 25, metadata !59, null}
!72 = metadata !{i32 13, i32 10, metadata !58, null}
!73 = metadata !{i32 12, i32 40, metadata !58, null}
!74 = metadata !{i32 21, i32 1, metadata !52, null}
