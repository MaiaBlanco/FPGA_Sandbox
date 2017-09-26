; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution3/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@matrix_mult.str = internal unnamed_addr constant [12 x i8] c"matrix_mult\00" ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str1 = private unnamed_addr constant [4 x i8] c"Col\00", align 1 ; [#uses=3 type=[4 x i8]*]
@.str = private unnamed_addr constant [4 x i8] c"Row\00", align 1 ; [#uses=3 type=[4 x i8]*]

; [#uses=0]
define void @matrix_mult([5 x [5 x i8]]* %a, [5 x [5 x i8]]* %b, [5 x [5 x i16]]* %prod) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([5 x [5 x i8]]* %a) nounwind, !map !31
  call void (...)* @_ssdm_op_SpecBitsMap([5 x [5 x i8]]* %b) nounwind, !map !37
  call void (...)* @_ssdm_op_SpecBitsMap([5 x [5 x i16]]* %prod) nounwind, !map !41
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @matrix_mult.str) nounwind
  call void @llvm.dbg.value(metadata !{[5 x [5 x i8]]* %a}, i64 0, metadata !45), !dbg !48 ; [debug line = 5:13] [debug variable = a]
  call void @llvm.dbg.value(metadata !{[5 x [5 x i8]]* %b}, i64 0, metadata !49), !dbg !51 ; [debug line = 6:13] [debug variable = b]
  call void @llvm.dbg.value(metadata !{[5 x [5 x i16]]* %prod}, i64 0, metadata !52), !dbg !54 ; [debug line = 7:16] [debug variable = prod]
  br label %1, !dbg !55                           ; [debug line = 10:22]

; <label>:1                                       ; preds = %8, %0
  %i = phi i3 [ 0, %0 ], [ %i.1, %8 ]             ; [#uses=3 type=i3]
  %i.cast6 = zext i3 %i to i32, !dbg !55          ; [#uses=6 type=i32] [debug line = 10:22]
  %exitcond2 = icmp eq i3 %i, -3, !dbg !55        ; [#uses=1 type=i1] [debug line = 10:22]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond2, label %10, label %3, !dbg !55 ; [debug line = 10:22]

; <label>:3                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str) nounwind, !dbg !58 ; [debug line = 10:37]
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str) nounwind, !dbg !58 ; [#uses=1 type=i32] [debug line = 10:37]
  %a.addr = getelementptr [5 x [5 x i8]]* %a, i32 0, i32 %i.cast6, i32 0, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %a.addr.1 = getelementptr [5 x [5 x i8]]* %a, i32 0, i32 %i.cast6, i32 1, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %a.addr.2 = getelementptr [5 x [5 x i8]]* %a, i32 0, i32 %i.cast6, i32 2, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %a.addr.3 = getelementptr [5 x [5 x i8]]* %a, i32 0, i32 %i.cast6, i32 3, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %a.addr.4 = getelementptr [5 x [5 x i8]]* %a, i32 0, i32 %i.cast6, i32 4, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  br label %4, !dbg !65                           ; [debug line = 12:25]

; <label>:4                                       ; preds = %6, %3
  %j = phi i3 [ 0, %3 ], [ %j.1, %6 ]             ; [#uses=3 type=i3]
  %j.cast5 = zext i3 %j to i32, !dbg !65          ; [#uses=6 type=i32] [debug line = 12:25]
  %exitcond1 = icmp eq i3 %j, -3, !dbg !65        ; [#uses=1 type=i1] [debug line = 12:25]
  %5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %8, label %6, !dbg !65  ; [debug line = 12:25]

; <label>:6                                       ; preds = %4
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str1) nounwind, !dbg !66 ; [debug line = 12:40]
  %tmp.1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str1) nounwind, !dbg !66 ; [#uses=1 type=i32] [debug line = 12:40]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @.str2) nounwind, !dbg !67 ; [debug line = 13:1]
  %prod.addr = getelementptr [5 x [5 x i16]]* %prod, i32 0, i32 %i.cast6, i32 %j.cast5, !dbg !68 ; [#uses=1 type=i16*] [debug line = 13:10]
  %a.load = load i8* %a.addr, align 1, !dbg !60   ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp2 = sext i8 %a.load to i16, !dbg !60        ; [#uses=1 type=i16] [debug line = 16:13]
  %b.addr = getelementptr [5 x [5 x i8]]* %b, i32 0, i32 0, i32 %j.cast5, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %b.load = load i8* %b.addr, align 1, !dbg !60   ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.6 = sext i8 %b.load to i16, !dbg !60       ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.2 = mul i16 %tmp2, %tmp.6, !dbg !60        ; [#uses=1 type=i16] [debug line = 16:13]
  %a.load.1 = load i8* %a.addr.1, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp. = sext i8 %a.load.1 to i16, !dbg !60      ; [#uses=1 type=i16] [debug line = 16:13]
  %b.addr.1 = getelementptr [5 x [5 x i8]]* %b, i32 0, i32 1, i32 %j.cast5, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %b.load.1 = load i8* %b.addr.1, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.1.1 = sext i8 %b.load.1 to i16, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.2.1 = mul i16 %tmp., %tmp.1.1, !dbg !60    ; [#uses=1 type=i16] [debug line = 16:13]
  %a.load.2 = load i8* %a.addr.2, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.3 = sext i8 %a.load.2 to i16, !dbg !60     ; [#uses=1 type=i16] [debug line = 16:13]
  %b.addr.2 = getelementptr [5 x [5 x i8]]* %b, i32 0, i32 2, i32 %j.cast5, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %b.load.2 = load i8* %b.addr.2, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.1.2 = sext i8 %b.load.2 to i16, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.2.2 = mul i16 %tmp.3, %tmp.1.2, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %a.load.3 = load i8* %a.addr.3, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.5 = sext i8 %a.load.3 to i16, !dbg !60     ; [#uses=1 type=i16] [debug line = 16:13]
  %b.addr.3 = getelementptr [5 x [5 x i8]]* %b, i32 0, i32 3, i32 %j.cast5, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %b.load.3 = load i8* %b.addr.3, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.1.3 = sext i8 %b.load.3 to i16, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.2.3 = mul i16 %tmp.5, %tmp.1.3, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %a.load.4 = load i8* %a.addr.4, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.4 = sext i8 %a.load.4 to i16, !dbg !60     ; [#uses=1 type=i16] [debug line = 16:13]
  %b.addr.4 = getelementptr [5 x [5 x i8]]* %b, i32 0, i32 4, i32 %j.cast5, !dbg !60 ; [#uses=1 type=i8*] [debug line = 16:13]
  %b.load.4 = load i8* %b.addr.4, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 16:13]
  %tmp.1.4 = sext i8 %b.load.4 to i16, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.2.4 = mul i16 %tmp.4, %tmp.1.4, !dbg !60   ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp1 = add i16 %tmp.2.1, %tmp.2, !dbg !60      ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp4 = add i16 %tmp.2.4, %tmp.2.3, !dbg !60    ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp3 = add i16 %tmp.2.2, %tmp4, !dbg !60       ; [#uses=1 type=i16] [debug line = 16:13]
  %tmp.3.4 = add i16 %tmp1, %tmp3, !dbg !60       ; [#uses=1 type=i16] [debug line = 16:13]
  store i16 %tmp.3.4, i16* %prod.addr, align 2, !dbg !60 ; [debug line = 16:13]
  %7 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str1, i32 %tmp.1) nounwind, !dbg !69 ; [#uses=0 type=i32] [debug line = 18:7]
  %j.1 = add i3 %j, 1, !dbg !70                   ; [#uses=1 type=i3] [debug line = 12:34]
  call void @llvm.dbg.value(metadata !{i3 %j.1}, i64 0, metadata !71), !dbg !70 ; [debug line = 12:34] [debug variable = j]
  br label %4, !dbg !70                           ; [debug line = 12:34]

; <label>:8                                       ; preds = %4
  %9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str, i32 %tmp) nounwind, !dbg !73 ; [#uses=0 type=i32] [debug line = 19:4]
  %i.1 = add i3 %i, 1, !dbg !74                   ; [#uses=1 type=i3] [debug line = 10:31]
  call void @llvm.dbg.value(metadata !{i3 %i.1}, i64 0, metadata !75), !dbg !74 ; [debug line = 10:31] [debug variable = i]
  br label %1, !dbg !74                           ; [debug line = 10:31]

; <label>:10                                      ; preds = %1
  ret void, !dbg !76                              ; [debug line = 21:1]
}

; [#uses=5]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=2]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=2]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=2]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=2]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!24}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution3/.autopilot/db/matrix_mult.pragma.2.cpp", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5CZynq_Book\5Chls\5Ctut3A", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"matrix_mult", metadata !"matrix_mult", metadata !"_Z11matrix_multPA5_cS0_PA5_s", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !22, i32 8} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"matrix_mult.cpp", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5CZynq_Book\5Chls\5Ctut3A", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !15, metadata !18}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 40, i64 8, i32 0, i32 0, metadata !11, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!11 = metadata !{i32 786454, null, metadata !"mat_a", metadata !6, i32 15, i64 0, i64 0, i64 0, i32 0, metadata !12} ; [ DW_TAG_typedef ]
!12 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!13 = metadata !{metadata !14}
!14 = metadata !{i32 786465, i64 0, i64 4}        ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!16 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 40, i64 8, i32 0, i32 0, metadata !17, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!17 = metadata !{i32 786454, null, metadata !"mat_b", metadata !6, i32 16, i64 0, i64 0, i64 0, i32 0, metadata !12} ; [ DW_TAG_typedef ]
!18 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !19} ; [ DW_TAG_pointer_type ]
!19 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 80, i64 16, i32 0, i32 0, metadata !20, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!20 = metadata !{i32 786454, null, metadata !"mat_prod", metadata !6, i32 17, i64 0, i64 0, i64 0, i32 0, metadata !21} ; [ DW_TAG_typedef ]
!21 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!22 = metadata !{metadata !23}
!23 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!24 = metadata !{null, metadata !25, metadata !26, metadata !27, metadata !28, metadata !29, metadata !30}
!25 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!26 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"mat_a [5]*", metadata !"mat_b [5]*", metadata !"mat_prod [5]*"}
!28 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!29 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"prod"}
!30 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 7, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"a", metadata !35, metadata !"char", i32 0, i32 7}
!35 = metadata !{metadata !36, metadata !36}
!36 = metadata !{i32 0, i32 4, i32 1}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 7, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"b", metadata !35, metadata !"char", i32 0, i32 7}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 15, metadata !43}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !"prod", metadata !35, metadata !"short", i32 0, i32 15}
!45 = metadata !{i32 786689, metadata !5, metadata !"a", null, i32 5, metadata !46, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!46 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 200, i64 8, i32 0, i32 0, metadata !11, metadata !47, i32 0, i32 0} ; [ DW_TAG_array_type ]
!47 = metadata !{metadata !14, metadata !14}
!48 = metadata !{i32 5, i32 13, metadata !5, null}
!49 = metadata !{i32 786689, metadata !5, metadata !"b", null, i32 6, metadata !50, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!50 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 200, i64 8, i32 0, i32 0, metadata !17, metadata !47, i32 0, i32 0} ; [ DW_TAG_array_type ]
!51 = metadata !{i32 6, i32 13, metadata !5, null}
!52 = metadata !{i32 786689, metadata !5, metadata !"prod", null, i32 7, metadata !53, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 400, i64 16, i32 0, i32 0, metadata !20, metadata !47, i32 0, i32 0} ; [ DW_TAG_array_type ]
!54 = metadata !{i32 7, i32 16, metadata !5, null}
!55 = metadata !{i32 10, i32 22, metadata !56, null}
!56 = metadata !{i32 786443, metadata !57, i32 10, i32 9, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 786443, metadata !5, i32 8, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 10, i32 37, metadata !59, null}
!59 = metadata !{i32 786443, metadata !56, i32 10, i32 36, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 16, i32 13, metadata !61, null}
!61 = metadata !{i32 786443, metadata !62, i32 15, i32 46, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 786443, metadata !63, i32 15, i32 19, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!63 = metadata !{i32 786443, metadata !64, i32 12, i32 39, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 786443, metadata !59, i32 12, i32 12, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 12, i32 25, metadata !64, null}
!66 = metadata !{i32 12, i32 40, metadata !63, null}
!67 = metadata !{i32 13, i32 1, metadata !63, null}
!68 = metadata !{i32 13, i32 10, metadata !63, null}
!69 = metadata !{i32 18, i32 7, metadata !63, null}
!70 = metadata !{i32 12, i32 34, metadata !64, null}
!71 = metadata !{i32 786688, metadata !64, metadata !"j", metadata !6, i32 12, metadata !72, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!73 = metadata !{i32 19, i32 4, metadata !59, null}
!74 = metadata !{i32 10, i32 31, metadata !56, null}
!75 = metadata !{i32 786688, metadata !56, metadata !"i", metadata !6, i32 10, metadata !72, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 21, i32 1, metadata !57, null}
