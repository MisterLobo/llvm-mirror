//===-- TargetAsmInfo.cpp - Asm Info ---------------------------------------==//
//
//                     The LLVM Compiler Infrastructure
//
// This file was developed by James M. Laskey and is distributed under
// the University of Illinois Open Source License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines target asm properties related what form asm statements
// should take.
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/TargetAsmInfo.h"

using namespace llvm;

TargetAsmInfo::TargetAsmInfo() :
  TextSection(".text"),
  DataSection(".data"),
  AddressSize(4),
  NeedsSet(false),
  CommentString("#"),
  GlobalPrefix(""),
  PrivateGlobalPrefix("."),
  GlobalVarAddrPrefix(""),
  GlobalVarAddrSuffix(""),
  FunctionAddrPrefix(""),
  FunctionAddrSuffix(""),
  InlineAsmStart("#APP"),
  InlineAsmEnd("#NO_APP"),
  ZeroDirective("\t.zero\t"),
  ZeroDirectiveSuffix(0),
  AsciiDirective("\t.ascii\t"),
  AscizDirective("\t.asciz\t"),
  Data8bitsDirective("\t.byte\t"),
  Data16bitsDirective("\t.short\t"),
  Data32bitsDirective("\t.long\t"),
  Data64bitsDirective("\t.quad\t"),
  AlignDirective("\t.align\t"),
  AlignmentIsInBytes(true),
  SwitchToSectionDirective("\t.section\t"),
  TextSectionStartSuffix(""),
  DataSectionStartSuffix(""),
  SectionEndDirectiveSuffix(0),
  ConstantPoolSection("\t.section .rodata\n"),
  JumpTableDataSection("\t.section .rodata\n"),
  JumpTableTextSection("\t.text\n"),
  JumpTableDirective(0),
  StaticCtorsSection("\t.section .ctors,\"aw\",@progbits"),
  StaticDtorsSection("\t.section .dtors,\"aw\",@progbits"),
  FourByteConstantSection(0),
  EightByteConstantSection(0),
  SixteenByteConstantSection(0),
  SetDirective(0),
  LCOMMDirective(0),
  COMMDirective("\t.comm\t"),
  COMMDirectiveTakesAlignment(true),
  HasDotTypeDotSizeDirective(true),
  HasLEB128(false),
  HasDotLoc(false),
  HasDotFile(false),
  DwarfAbbrevSection(".debug_abbrev"),
  DwarfInfoSection(".debug_info"),
  DwarfLineSection(".debug_line"),
  DwarfFrameSection(".debug_frame"),
  DwarfPubNamesSection(".debug_pubnames"),
  DwarfPubTypesSection(".debug_pubtypes"),
  DwarfStrSection(".debug_str"),
  DwarfLocSection(".debug_loc"),
  DwarfARangesSection(".debug_aranges"),
  DwarfRangesSection(".debug_ranges"),
  DwarfMacInfoSection(".debug_macinfo")
{}
