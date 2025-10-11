	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	movi	d0, #0000000000000000
	stur	s0, [x29, #-16]
	mov	w8, #1133903872                 ; =0x43960000
	fmov	s0, w8
	stur	s0, [x29, #-20]
	fmov	s0, #20.00000000
	str	s0, [sp, #24]
	ldur	s0, [x29, #-16]
	stur	s0, [x29, #-8]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	s0, [x29, #-8]
	ldur	s1, [x29, #-20]
	fcmp	s0, s1
	b.pl	LBB0_3
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	s0, [x29, #-8]
	movi.2s	v1, #66, lsl #24
                                        ; kill: def $s1 killed $s1 killed $d1
	fsub	s1, s0, s1
	fmov	s0, #5.00000000
	fmul	s0, s0, s1
	fmov	s1, #9.00000000
	fdiv	s0, s0, s1
	stur	s0, [x29, #-12]
	ldur	s0, [x29, #-8]
	fcvt	d1, s0
	ldur	s0, [x29, #-12]
	fcvt	d0, s0
	mov	x8, sp
	str	d1, [x8]
	str	d0, [x8, #8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldr	s1, [sp, #24]
	ldur	s0, [x29, #-8]
	fadd	s0, s0, s1
	stur	s0, [x29, #-8]
	b	LBB0_1
LBB0_3:
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%3.0f %6.1f\n"

.subsections_via_symbols
