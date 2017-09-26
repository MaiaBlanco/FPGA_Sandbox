; ModuleID = 'C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution3/.autopilot/db/a.g.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@.str = private unnamed_addr constant [4 x i8] c"Row\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str1 = private unnamed_addr constant [4 x i8] c"Col\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str3 = private unnamed_addr constant [8 x i8] c"Product\00", align 1 ; [#uses=1 type=[8 x i8]*]

; [#uses=0]
define void @_Z11matrix_multPA5_cS0_PA5_s([5 x i8]* %a, [5 x i8]* %b, [5 x i16]* %prod) nounwind {
  %1 = alloca [5 x i8]*, align 4                  ; [#uses=3 type=[5 x i8]**]
  %2 = alloca [5 x i8]*, align 4                  ; [#uses=3 type=[5 x i8]**]
  %3 = alloca [5 x i16]*, align 4                 ; [#uses=4 type=[5 x i16]**]
  %i = alloca i32, align 4                        ; [#uses=7 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=7 type=i32*]
  %k = alloca i32, align 4                        ; [#uses=6 type=i32*]
  store [5 x i8]* %a, [5 x i8]** %1, align 4
  call void @llvm.dbg.declare(metadata !{[5 x i8]** %1}, metadata !31), !dbg !32 ; [debug line = 5:13] [debug variable = a]
  store [5 x i8]* %b, [5 x i8]** %2, align 4
  call void @llvm.dbg.declare(metadata !{[5 x i8]** %2}, metadata !33), !dbg !34 ; [debug line = 6:13] [debug variable = b]
  store [5 x i16]* %prod, [5 x i16]** %3, align 4
  call void @llvm.dbg.declare(metadata !{[5 x i16]** %3}, metadata !35), !dbg !36 ; [debug line = 7:16] [debug variable = prod]
  %4 = load [5 x i8]** %1, align 4, !dbg !37      ; [#uses=1 type=[5 x i8]*] [debug line = 8:2]
  call void (...)* @_ssdm_SpecArrayDimSize([5 x i8]* %4, i32 5) nounwind, !dbg !37 ; [debug line = 8:2]
  %5 = load [5 x i8]** %2, align 4, !dbg !39      ; [#uses=1 type=[5 x i8]*] [debug line = 8:30]
  call void (...)* @_ssdm_SpecArrayDimSize([5 x i8]* %5, i32 5) nounwind, !dbg !39 ; [debug line = 8:30]
  %6 = load [5 x i16]** %3, align 4, !dbg !40     ; [#uses=1 type=[5 x i16]*] [debug line = 8:58]
  call void (...)* @_ssdm_SpecArrayDimSize([5 x i16]* %6, i32 5) nounwind, !dbg !40 ; [debug line = 8:58]
  br label %7, !dbg !40                           ; [debug line = 8:58]

; <label>:7                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !41), !dbg !44 ; [debug line = 10:17] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !45         ; [debug line = 10:22]
  br label %8, !dbg !45                           ; [debug line = 10:22]

; <label>:8                                       ; preds = %59, %7
  %9 = load i32* %i, align 4, !dbg !45            ; [#uses=1 type=i32] [debug line = 10:22]
  %10 = icmp slt i32 %9, 5, !dbg !45              ; [#uses=1 type=i1] [debug line = 10:22]
  br i1 %10, label %11, label %62, !dbg !45       ; [debug line = 10:22]

; <label>:11                                      ; preds = %8
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !46 ; [debug line = 10:37]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !46 ; [debug line = 10:37]
  br label %12, !dbg !46                          ; [debug line = 10:37]

; <label>:12                                      ; preds = %11
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !48), !dbg !50 ; [debug line = 12:20] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !51         ; [debug line = 12:25]
  br label %13, !dbg !51                          ; [debug line = 12:25]

; <label>:13                                      ; preds = %55, %12
  %14 = load i32* %j, align 4, !dbg !51           ; [#uses=1 type=i32] [debug line = 12:25]
  %15 = icmp slt i32 %14, 5, !dbg !51             ; [#uses=1 type=i1] [debug line = 12:25]
  br i1 %15, label %16, label %58, !dbg !51       ; [debug line = 12:25]

; <label>:16                                      ; preds = %13
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !52 ; [debug line = 12:40]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !52 ; [debug line = 12:40]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !54 ; [debug line = 13:1]
  %17 = load i32* %j, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 13:10]
  %18 = load i32* %i, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 13:10]
  %19 = load [5 x i16]** %3, align 4, !dbg !55    ; [#uses=1 type=[5 x i16]*] [debug line = 13:10]
  %20 = getelementptr inbounds [5 x i16]* %19, i32 %18, !dbg !55 ; [#uses=1 type=[5 x i16]*] [debug line = 13:10]
  %21 = getelementptr inbounds [5 x i16]* %20, i32 0, i32 %17, !dbg !55 ; [#uses=1 type=i16*] [debug line = 13:10]
  store i16 0, i16* %21, align 2, !dbg !55        ; [debug line = 13:10]
  br label %22, !dbg !55                          ; [debug line = 13:10]

; <label>:22                                      ; preds = %16
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !56), !dbg !58 ; [debug line = 15:27] [debug variable = k]
  store i32 0, i32* %k, align 4, !dbg !59         ; [debug line = 15:32]
  br label %23, !dbg !59                          ; [debug line = 15:32]

; <label>:23                                      ; preds = %51, %22
  %24 = load i32* %k, align 4, !dbg !59           ; [#uses=1 type=i32] [debug line = 15:32]
  %25 = icmp slt i32 %24, 5, !dbg !59             ; [#uses=1 type=i1] [debug line = 15:32]
  br i1 %25, label %26, label %54, !dbg !59       ; [debug line = 15:32]

; <label>:26                                      ; preds = %23
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([8 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !60 ; [debug line = 15:47]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([8 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !60 ; [debug line = 15:47]
  %27 = load i32* %k, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %28 = load i32* %i, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %29 = load [5 x i8]** %1, align 4, !dbg !62     ; [#uses=1 type=[5 x i8]*] [debug line = 16:13]
  %30 = getelementptr inbounds [5 x i8]* %29, i32 %28, !dbg !62 ; [#uses=1 type=[5 x i8]*] [debug line = 16:13]
  %31 = getelementptr inbounds [5 x i8]* %30, i32 0, i32 %27, !dbg !62 ; [#uses=1 type=i8*] [debug line = 16:13]
  %32 = load i8* %31, align 1, !dbg !62           ; [#uses=1 type=i8] [debug line = 16:13]
  %33 = sext i8 %32 to i32, !dbg !62              ; [#uses=1 type=i32] [debug line = 16:13]
  %34 = load i32* %j, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %35 = load i32* %k, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %36 = load [5 x i8]** %2, align 4, !dbg !62     ; [#uses=1 type=[5 x i8]*] [debug line = 16:13]
  %37 = getelementptr inbounds [5 x i8]* %36, i32 %35, !dbg !62 ; [#uses=1 type=[5 x i8]*] [debug line = 16:13]
  %38 = getelementptr inbounds [5 x i8]* %37, i32 0, i32 %34, !dbg !62 ; [#uses=1 type=i8*] [debug line = 16:13]
  %39 = load i8* %38, align 1, !dbg !62           ; [#uses=1 type=i8] [debug line = 16:13]
  %40 = sext i8 %39 to i32, !dbg !62              ; [#uses=1 type=i32] [debug line = 16:13]
  %41 = mul nsw i32 %33, %40, !dbg !62            ; [#uses=1 type=i32] [debug line = 16:13]
  %42 = load i32* %j, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %43 = load i32* %i, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 16:13]
  %44 = load [5 x i16]** %3, align 4, !dbg !62    ; [#uses=1 type=[5 x i16]*] [debug line = 16:13]
  %45 = getelementptr inbounds [5 x i16]* %44, i32 %43, !dbg !62 ; [#uses=1 type=[5 x i16]*] [debug line = 16:13]
  %46 = getelementptr inbounds [5 x i16]* %45, i32 0, i32 %42, !dbg !62 ; [#uses=2 type=i16*] [debug line = 16:13]
  %47 = load i16* %46, align 2, !dbg !62          ; [#uses=1 type=i16] [debug line = 16:13]
  %48 = sext i16 %47 to i32, !dbg !62             ; [#uses=1 type=i32] [debug line = 16:13]
  %49 = add nsw i32 %48, %41, !dbg !62            ; [#uses=1 type=i32] [debug line = 16:13]
  %50 = trunc i32 %49 to i16, !dbg !62            ; [#uses=1 type=i16] [debug line = 16:13]
  store i16 %50, i16* %46, align 2, !dbg !62      ; [debug line = 16:13]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([8 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !63 ; [debug line = 17:10]
  br label %51, !dbg !63                          ; [debug line = 17:10]

; <label>:51                                      ; preds = %26
  %52 = load i32* %k, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 15:41]
  %53 = add nsw i32 %52, 1, !dbg !64              ; [#uses=1 type=i32] [debug line = 15:41]
  store i32 %53, i32* %k, align 4, !dbg !64       ; [debug line = 15:41]
  br label %23, !dbg !64                          ; [debug line = 15:41]

; <label>:54                                      ; preds = %23
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !65 ; [debug line = 18:7]
  br label %55, !dbg !65                          ; [debug line = 18:7]

; <label>:55                                      ; preds = %54
  %56 = load i32* %j, align 4, !dbg !66           ; [#uses=1 type=i32] [debug line = 12:34]
  %57 = add nsw i32 %56, 1, !dbg !66              ; [#uses=1 type=i32] [debug line = 12:34]
  store i32 %57, i32* %j, align 4, !dbg !66       ; [debug line = 12:34]
  br label %13, !dbg !66                          ; [debug line = 12:34]

; <label>:58                                      ; preds = %13
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !67 ; [debug line = 19:4]
  br label %59, !dbg !67                          ; [debug line = 19:4]

; <label>:59                                      ; preds = %58
  %60 = load i32* %i, align 4, !dbg !68           ; [#uses=1 type=i32] [debug line = 10:31]
  %61 = add nsw i32 %60, 1, !dbg !68              ; [#uses=1 type=i32] [debug line = 10:31]
  store i32 %61, i32* %i, align 4, !dbg !68       ; [debug line = 10:31]
  br label %8, !dbg !68                           ; [debug line = 10:31]

; <label>:62                                      ; preds = %8
  ret void, !dbg !69                              ; [debug line = 21:1]
}

; [#uses=6]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=3]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=3]
declare void @_ssdm_RegionEnd(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!24}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/Zynq_Book/hls/tut3A/matrix_mult_prj/solution3/.autopilot/db/matrix_mult.pragma.2.cpp", metadata !"C:\5CUsers\5Cmarkb\5CSource\5CRepos\5CFPGA_Sandbox\5CRecComp\5CLab2\5CZynq_Book\5Chls\5Ctut3A", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"matrix_mult", metadata !"matrix_mult", metadata !"_Z11matrix_multPA5_cS0_PA5_s", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([5 x i8]*, [5 x i8]*, [5 x i16]*)* @_Z11matrix_multPA5_cS0_PA5_s, null, null, metadata !22, i32 8} ; [ DW_TAG_subprogram ]
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
!24 = metadata !{void ([5 x i8]*, [5 x i8]*, [5 x i16]*)* @_Z11matrix_multPA5_cS0_PA5_s, metadata !25, metadata !26, metadata !27, metadata !28, metadata !29, metadata !30}
!25 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!26 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"mat_a [5]*", metadata !"mat_b [5]*", metadata !"mat_prod [5]*"}
!28 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!29 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"prod"}
!30 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!31 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777221, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!32 = metadata !{i32 5, i32 13, metadata !5, null}
!33 = metadata !{i32 786689, metadata !5, metadata !"b", metadata !6, i32 33554438, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!34 = metadata !{i32 6, i32 13, metadata !5, null}
!35 = metadata !{i32 786689, metadata !5, metadata !"prod", metadata !6, i32 50331655, metadata !18, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!36 = metadata !{i32 7, i32 16, metadata !5, null}
!37 = metadata !{i32 8, i32 2, metadata !38, null}
!38 = metadata !{i32 786443, metadata !5, i32 8, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!39 = metadata !{i32 8, i32 30, metadata !38, null}
!40 = metadata !{i32 8, i32 58, metadata !38, null}
!41 = metadata !{i32 786688, metadata !42, metadata !"i", metadata !6, i32 10, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!42 = metadata !{i32 786443, metadata !38, i32 10, i32 9, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!43 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!44 = metadata !{i32 10, i32 17, metadata !42, null}
!45 = metadata !{i32 10, i32 22, metadata !42, null}
!46 = metadata !{i32 10, i32 37, metadata !47, null}
!47 = metadata !{i32 786443, metadata !42, i32 10, i32 36, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 786688, metadata !49, metadata !"j", metadata !6, i32 12, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!49 = metadata !{i32 786443, metadata !47, i32 12, i32 12, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 12, i32 20, metadata !49, null}
!51 = metadata !{i32 12, i32 25, metadata !49, null}
!52 = metadata !{i32 12, i32 40, metadata !53, null}
!53 = metadata !{i32 786443, metadata !49, i32 12, i32 39, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 13, i32 1, metadata !53, null}
!55 = metadata !{i32 13, i32 10, metadata !53, null}
!56 = metadata !{i32 786688, metadata !57, metadata !"k", metadata !6, i32 15, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 786443, metadata !53, i32 15, i32 19, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 15, i32 27, metadata !57, null}
!59 = metadata !{i32 15, i32 32, metadata !57, null}
!60 = metadata !{i32 15, i32 47, metadata !61, null}
!61 = metadata !{i32 786443, metadata !57, i32 15, i32 46, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 16, i32 13, metadata !61, null}
!63 = metadata !{i32 17, i32 10, metadata !61, null}
!64 = metadata !{i32 15, i32 41, metadata !57, null}
!65 = metadata !{i32 18, i32 7, metadata !53, null}
!66 = metadata !{i32 12, i32 34, metadata !49, null}
!67 = metadata !{i32 19, i32 4, metadata !47, null}
!68 = metadata !{i32 10, i32 31, metadata !42, null}
!69 = metadata !{i32 21, i32 1, metadata !38, null}
