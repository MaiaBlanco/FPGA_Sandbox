; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir_prj/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@shift_reg = internal unnamed_addr global [11 x i32] zeroinitializer, align 4 ; [#uses=3 type=[11 x i32]*]
@fir.str = internal unnamed_addr constant [4 x i8] c"fir\00" ; [#uses=1 type=[4 x i8]*]
@.str = private unnamed_addr constant [17 x i8] c"Shift_Accum_Loop\00", align 1 ; [#uses=1 type=[17 x i8]*]

; [#uses=7]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @fir(i32* %y, i32* %c, i32 %x) nounwind {
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @fir.str) nounwind
  call void @llvm.dbg.value(metadata !{i32* %y}, i64 0, metadata !29), !dbg !30 ; [debug line = 49:11] [debug variable = y]
  call void @llvm.dbg.value(metadata !{i32* %c}, i64 0, metadata !31), !dbg !32 ; [debug line = 50:10] [debug variable = c]
  call void @llvm.dbg.value(metadata !{i32 %x}, i64 0, metadata !33), !dbg !34 ; [debug line = 51:10] [debug variable = x]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %c, i32 11), !dbg !35 ; [debug line = 52:6]
  br label %1, !dbg !37                           ; [debug line = 60:26]

; <label>:1                                       ; preds = %5, %0
  %acc = phi i32 [ 0, %0 ], [ %acc.1, %5 ]        ; [#uses=2 type=i32]
  %i = phi i32 [ 10, %0 ], [ %i.1, %5 ]           ; [#uses=6 type=i32]
  %tmp = icmp sgt i32 %i, -1, !dbg !37            ; [#uses=1 type=i1] [debug line = 60:26]
  br i1 %tmp, label %2, label %6, !dbg !37        ; [debug line = 60:26]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([17 x i8]* @.str, i32 0, i32 0)), !dbg !39 ; [debug line = 60:45]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([17 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !39 ; [#uses=1 type=i32] [debug line = 60:45]
  %tmp.1 = icmp eq i32 %i, 0, !dbg !41            ; [#uses=1 type=i1] [debug line = 61:2]
  br i1 %tmp.1, label %3, label %4, !dbg !41      ; [debug line = 61:2]

; <label>:3                                       ; preds = %2
  store i32 %x, i32* getelementptr inbounds ([11 x i32]* @shift_reg, i32 0, i32 0), align 4, !dbg !42 ; [debug line = 62:4]
  call void @llvm.dbg.value(metadata !{i32 %x}, i64 0, metadata !44), !dbg !45 ; [debug line = 63:7] [debug variable = data]
  br label %5, !dbg !46                           ; [debug line = 64:5]

; <label>:4                                       ; preds = %2
  %tmp.2 = add nsw i32 %i, -1, !dbg !47           ; [#uses=1 type=i32] [debug line = 65:4]
  %shift_reg.addr = getelementptr inbounds [11 x i32]* @shift_reg, i32 0, i32 %tmp.2, !dbg !47 ; [#uses=1 type=i32*] [debug line = 65:4]
  %data = load i32* %shift_reg.addr, align 4, !dbg !47 ; [#uses=4 type=i32] [debug line = 65:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %data) nounwind
  %shift_reg.addr.1 = getelementptr inbounds [11 x i32]* @shift_reg, i32 0, i32 %i, !dbg !47 ; [#uses=1 type=i32*] [debug line = 65:4]
  store i32 %data, i32* %shift_reg.addr.1, align 4, !dbg !47 ; [debug line = 65:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %data) nounwind
  call void @llvm.dbg.value(metadata !{i32 %data}, i64 0, metadata !44), !dbg !49 ; [debug line = 66:4] [debug variable = data]
  br label %5

; <label>:5                                       ; preds = %4, %3
  %data1 = phi i32 [ %x, %3 ], [ %data, %4 ]      ; [#uses=1 type=i32]
  %c.addr = getelementptr inbounds i32* %c, i32 %i, !dbg !50 ; [#uses=1 type=i32*] [debug line = 68:5]
  %c.load = load i32* %c.addr, align 4, !dbg !50  ; [#uses=2 type=i32] [debug line = 68:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %c.load) nounwind
  %tmp.3 = mul nsw i32 %c.load, %data1, !dbg !50  ; [#uses=1 type=i32] [debug line = 68:5]
  %acc.1 = add nsw i32 %tmp.3, %acc, !dbg !50     ; [#uses=1 type=i32] [debug line = 68:5]
  call void @llvm.dbg.value(metadata !{i32 %acc.1}, i64 0, metadata !51), !dbg !50 ; [debug line = 68:5] [debug variable = acc]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([17 x i8]* @.str, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !53 ; [#uses=0 type=i32] [debug line = 69:3]
  %i.1 = add nsw i32 %i, -1, !dbg !54             ; [#uses=1 type=i32] [debug line = 60:39]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !55), !dbg !54 ; [debug line = 60:39] [debug variable = i]
  br label %1, !dbg !54                           ; [debug line = 60:39]

; <label>:6                                       ; preds = %1
  %acc.0.lcssa = phi i32 [ %acc, %1 ]             ; [#uses=1 type=i32]
  store i32 %acc.0.lcssa, i32* %y, align 4, !dbg !56 ; [debug line = 70:3]
  ret void, !dbg !57                              ; [debug line = 71:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!22}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/ug871-design-files/Introduction/lab1/fir_prj/solution1/.autopilot/db/fir.pragma.2.c", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5Cug871-design-files\5CIntroduction\5Clab1", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !16} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"fir", metadata !"fir", metadata !"", metadata !6, i32 48, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32*, i32*, i32)* @fir, null, null, metadata !14, i32 52} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"fir.c", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5Cug871-design-files\5CIntroduction\5Clab1", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !12, metadata !10}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786454, null, metadata !"data_t", metadata !6, i32 51, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!11 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !13} ; [ DW_TAG_pointer_type ]
!13 = metadata !{i32 786454, null, metadata !"coef_t", metadata !6, i32 50, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!14 = metadata !{metadata !15}
!15 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!16 = metadata !{metadata !17}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 786484, i32 0, metadata !5, metadata !"shift_reg", metadata !"shift_reg", metadata !"", metadata !6, i32 54, metadata !19, i32 1, i32 1, [11 x i32]* @shift_reg} ; [ DW_TAG_variable ]
!19 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 352, i64 32, i32 0, i32 0, metadata !10, metadata !20, i32 0, i32 0} ; [ DW_TAG_array_type ]
!20 = metadata !{metadata !21}
!21 = metadata !{i32 786465, i64 0, i64 10}       ; [ DW_TAG_subrange_type ]
!22 = metadata !{void (i32*, i32*, i32)* @fir, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27, metadata !28}
!23 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 0}
!24 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!25 = metadata !{metadata !"kernel_arg_type", metadata !"data_t*", metadata !"coef_t*", metadata !"data_t"}
!26 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!27 = metadata !{metadata !"kernel_arg_name", metadata !"y", metadata !"c", metadata !"x"}
!28 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!29 = metadata !{i32 786689, metadata !5, metadata !"y", metadata !6, i32 16777265, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!30 = metadata !{i32 49, i32 11, metadata !5, null}
!31 = metadata !{i32 786689, metadata !5, metadata !"c", metadata !6, i32 33554482, metadata !12, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!32 = metadata !{i32 50, i32 10, metadata !5, null}
!33 = metadata !{i32 786689, metadata !5, metadata !"x", metadata !6, i32 50331699, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!34 = metadata !{i32 51, i32 10, metadata !5, null}
!35 = metadata !{i32 52, i32 6, metadata !36, null}
!36 = metadata !{i32 786443, metadata !5, i32 52, i32 5, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!37 = metadata !{i32 60, i32 26, metadata !38, null}
!38 = metadata !{i32 786443, metadata !36, i32 60, i32 21, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!39 = metadata !{i32 60, i32 45, metadata !40, null}
!40 = metadata !{i32 786443, metadata !38, i32 60, i32 44, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 61, i32 2, metadata !40, null}
!42 = metadata !{i32 62, i32 4, metadata !43, null}
!43 = metadata !{i32 786443, metadata !40, i32 61, i32 12, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!44 = metadata !{i32 786688, metadata !36, metadata !"data", metadata !6, i32 56, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!45 = metadata !{i32 63, i32 7, metadata !43, null}
!46 = metadata !{i32 64, i32 5, metadata !43, null}
!47 = metadata !{i32 65, i32 4, metadata !48, null}
!48 = metadata !{i32 786443, metadata !40, i32 64, i32 12, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 66, i32 4, metadata !48, null}
!50 = metadata !{i32 68, i32 5, metadata !40, null}
!51 = metadata !{i32 786688, metadata !36, metadata !"acc", metadata !6, i32 55, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786454, null, metadata !"acc_t", metadata !6, i32 52, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!53 = metadata !{i32 69, i32 3, metadata !40, null}
!54 = metadata !{i32 60, i32 39, metadata !38, null}
!55 = metadata !{i32 786688, metadata !36, metadata !"i", metadata !6, i32 57, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!56 = metadata !{i32 70, i32 3, metadata !36, null}
!57 = metadata !{i32 71, i32 1, metadata !36, null}
