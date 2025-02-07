// SPDX-FileCopyrightText: 2021 deroad <wargio@libero.it>
// SPDX-License-Identifier: LGPL-3.0-only

#ifndef RZ_ASM_JAVA_BYTECODE_H
#define RZ_ASM_JAVA_BYTECODE_H
#include <rz_types.h>

#define BYTECODE_00_NOP             (0x00)
#define BYTECODE_01_ACONST_NULL     (0x01)
#define BYTECODE_02_ICONST_M1       (0x02)
#define BYTECODE_03_ICONST_0        (0x03)
#define BYTECODE_04_ICONST_1        (0x04)
#define BYTECODE_05_ICONST_2        (0x05)
#define BYTECODE_06_ICONST_3        (0x06)
#define BYTECODE_07_ICONST_4        (0x07)
#define BYTECODE_08_ICONST_5        (0x08)
#define BYTECODE_09_LCONST_0        (0x09)
#define BYTECODE_0A_LCONST_1        (0x0A)
#define BYTECODE_0B_FCONST_0        (0x0B)
#define BYTECODE_0C_FCONST_1        (0x0C)
#define BYTECODE_0D_FCONST_2        (0x0D)
#define BYTECODE_0E_DCONST_0        (0x0E)
#define BYTECODE_0F_DCONST_1        (0x0F)
#define BYTECODE_10_BIPUSH          (0x10)
#define BYTECODE_11_SIPUSH          (0x11)
#define BYTECODE_12_LDC             (0x12)
#define BYTECODE_13_LDC_W           (0x13)
#define BYTECODE_14_LDC2_W          (0x14)
#define BYTECODE_15_ILOAD           (0x15)
#define BYTECODE_16_LLOAD           (0x16)
#define BYTECODE_17_FLOAD           (0x17)
#define BYTECODE_18_DLOAD           (0x18)
#define BYTECODE_19_ALOAD           (0x19)
#define BYTECODE_1A_ILOAD_0         (0x1A)
#define BYTECODE_1B_ILOAD_1         (0x1B)
#define BYTECODE_1C_ILOAD_2         (0x1C)
#define BYTECODE_1D_ILOAD_3         (0x1D)
#define BYTECODE_1E_LLOAD_0         (0x1E)
#define BYTECODE_1F_LLOAD_1         (0x1F)
#define BYTECODE_20_LLOAD_2         (0x20)
#define BYTECODE_21_LLOAD_3         (0x21)
#define BYTECODE_22_FLOAD_0         (0x22)
#define BYTECODE_23_FLOAD_1         (0x23)
#define BYTECODE_24_FLOAD_2         (0x24)
#define BYTECODE_25_FLOAD_3         (0x25)
#define BYTECODE_26_DLOAD_0         (0x26)
#define BYTECODE_27_DLOAD_1         (0x27)
#define BYTECODE_28_DLOAD_2         (0x28)
#define BYTECODE_29_DLOAD_3         (0x29)
#define BYTECODE_2A_ALOAD_0         (0x2A)
#define BYTECODE_2B_ALOAD_1         (0x2B)
#define BYTECODE_2C_ALOAD_2         (0x2C)
#define BYTECODE_2D_ALOAD_3         (0x2D)
#define BYTECODE_2E_IALOAD          (0x2E)
#define BYTECODE_2F_LALOAD          (0x2F)
#define BYTECODE_30_FALOAD          (0x30)
#define BYTECODE_31_DALOAD          (0x31)
#define BYTECODE_32_AALOAD          (0x32)
#define BYTECODE_33_BALOAD          (0x33)
#define BYTECODE_34_CALOAD          (0x34)
#define BYTECODE_35_SALOAD          (0x35)
#define BYTECODE_36_ISTORE          (0x36)
#define BYTECODE_37_LSTORE          (0x37)
#define BYTECODE_38_FSTORE          (0x38)
#define BYTECODE_39_DSTORE          (0x39)
#define BYTECODE_3A_ASTORE          (0x3A)
#define BYTECODE_3B_ISTORE_0        (0x3B)
#define BYTECODE_3C_ISTORE_1        (0x3C)
#define BYTECODE_3D_ISTORE_2        (0x3D)
#define BYTECODE_3E_ISTORE_3        (0x3E)
#define BYTECODE_3F_LSTORE_0        (0x3F)
#define BYTECODE_40_LSTORE_1        (0x40)
#define BYTECODE_41_LSTORE_2        (0x41)
#define BYTECODE_42_LSTORE_3        (0x42)
#define BYTECODE_43_FSTORE_0        (0x43)
#define BYTECODE_44_FSTORE_1        (0x44)
#define BYTECODE_45_FSTORE_2        (0x45)
#define BYTECODE_46_FSTORE_3        (0x46)
#define BYTECODE_47_DSTORE_0        (0x47)
#define BYTECODE_48_DSTORE_1        (0x48)
#define BYTECODE_49_DSTORE_2        (0x49)
#define BYTECODE_4A_DSTORE_3        (0x4A)
#define BYTECODE_4B_ASTORE_0        (0x4B)
#define BYTECODE_4C_ASTORE_1        (0x4C)
#define BYTECODE_4D_ASTORE_2        (0x4D)
#define BYTECODE_4E_ASTORE_3        (0x4E)
#define BYTECODE_4F_IASTORE         (0x4F)
#define BYTECODE_50_LASTORE         (0x50)
#define BYTECODE_51_FASTORE         (0x51)
#define BYTECODE_52_DASTORE         (0x52)
#define BYTECODE_53_AASTORE         (0x53)
#define BYTECODE_54_BASTORE         (0x54)
#define BYTECODE_55_CASTORE         (0x55)
#define BYTECODE_56_SASTORE         (0x56)
#define BYTECODE_57_POP             (0x57)
#define BYTECODE_58_POP2            (0x58)
#define BYTECODE_59_DUP             (0x59)
#define BYTECODE_5A_DUP_X1          (0x5A)
#define BYTECODE_5B_DUP_X2          (0x5B)
#define BYTECODE_5C_DUP2            (0x5C)
#define BYTECODE_5D_DUP2_X1         (0x5D)
#define BYTECODE_5E_DUP2_X2         (0x5E)
#define BYTECODE_5F_SWAP            (0x5F)
#define BYTECODE_60_IADD            (0x60)
#define BYTECODE_61_LADD            (0x61)
#define BYTECODE_62_FADD            (0x62)
#define BYTECODE_63_DADD            (0x63)
#define BYTECODE_64_ISUB            (0x64)
#define BYTECODE_65_LSUB            (0x65)
#define BYTECODE_66_FSUB            (0x66)
#define BYTECODE_67_DSUB            (0x67)
#define BYTECODE_68_IMUL            (0x68)
#define BYTECODE_69_LMUL            (0x69)
#define BYTECODE_6A_FMUL            (0x6A)
#define BYTECODE_6B_DMUL            (0x6B)
#define BYTECODE_6C_IDIV            (0x6C)
#define BYTECODE_6D_LDIV            (0x6D)
#define BYTECODE_6E_FDIV            (0x6E)
#define BYTECODE_6F_DDIV            (0x6F)
#define BYTECODE_70_IREM            (0x70)
#define BYTECODE_71_LREM            (0x71)
#define BYTECODE_72_FREM            (0x72)
#define BYTECODE_73_DREM            (0x73)
#define BYTECODE_74_INEG            (0x74)
#define BYTECODE_75_LNEG            (0x75)
#define BYTECODE_76_FNEG            (0x76)
#define BYTECODE_77_DNEG            (0x77)
#define BYTECODE_78_ISHL            (0x78)
#define BYTECODE_79_LSHL            (0x79)
#define BYTECODE_7A_ISHR            (0x7A)
#define BYTECODE_7B_LSHR            (0x7B)
#define BYTECODE_7C_IUSHR           (0x7C)
#define BYTECODE_7D_LUSHR           (0x7D)
#define BYTECODE_7E_IAND            (0x7E)
#define BYTECODE_7F_LAND            (0x7F)
#define BYTECODE_80_IOR             (0x80)
#define BYTECODE_81_LOR             (0x81)
#define BYTECODE_82_IXOR            (0x82)
#define BYTECODE_83_LXOR            (0x83)
#define BYTECODE_84_IINC            (0x84)
#define BYTECODE_85_I2L             (0x85)
#define BYTECODE_86_I2F             (0x86)
#define BYTECODE_87_I2D             (0x87)
#define BYTECODE_88_L2I             (0x88)
#define BYTECODE_89_L2F             (0x89)
#define BYTECODE_8A_L2D             (0x8A)
#define BYTECODE_8B_F2I             (0x8B)
#define BYTECODE_8C_F2L             (0x8C)
#define BYTECODE_8D_F2D             (0x8D)
#define BYTECODE_8E_D2I             (0x8E)
#define BYTECODE_8F_D2L             (0x8F)
#define BYTECODE_90_D2F             (0x90)
#define BYTECODE_91_I2B             (0x91)
#define BYTECODE_92_I2C             (0x92)
#define BYTECODE_93_I2S             (0x93)
#define BYTECODE_94_LCMP            (0x94)
#define BYTECODE_95_FCMPL           (0x95)
#define BYTECODE_96_FCMPG           (0x96)
#define BYTECODE_97_DCMPL           (0x97)
#define BYTECODE_98_DCMPG           (0x98)
#define BYTECODE_99_IFEQ            (0x99)
#define BYTECODE_9A_IFNE            (0x9A)
#define BYTECODE_9B_IFLT            (0x9B)
#define BYTECODE_9C_IFGE            (0x9C)
#define BYTECODE_9D_IFGT            (0x9D)
#define BYTECODE_9E_IFLE            (0x9E)
#define BYTECODE_9F_IF_ICMPEQ       (0x9F)
#define BYTECODE_A0_IF_ICMPNE       (0xA0)
#define BYTECODE_A1_IF_ICMPLT       (0xA1)
#define BYTECODE_A2_IF_ICMPGE       (0xA2)
#define BYTECODE_A3_IF_ICMPGT       (0xA3)
#define BYTECODE_A4_IF_ICMPLE       (0xA4)
#define BYTECODE_A5_IF_ACMPEQ       (0xA5)
#define BYTECODE_A6_IF_ACMPNE       (0xA6)
#define BYTECODE_A7_GOTO            (0xA7)
#define BYTECODE_A8_JSR             (0xA8)
#define BYTECODE_A9_RET             (0xA9)
#define BYTECODE_AA_TABLESWITCH     (0xAA)
#define BYTECODE_AB_LOOKUPSWITCH    (0xAB)
#define BYTECODE_AC_IRETURN         (0xAC)
#define BYTECODE_AD_LRETURN         (0xAD)
#define BYTECODE_AE_FRETURN         (0xAE)
#define BYTECODE_AF_DRETURN         (0xAF)
#define BYTECODE_B0_ARETURN         (0xB0)
#define BYTECODE_B1_RETURN          (0xB1)
#define BYTECODE_B2_GETSTATIC       (0xB2)
#define BYTECODE_B3_PUTSTATIC       (0xB3)
#define BYTECODE_B4_GETFIELD        (0xB4)
#define BYTECODE_B5_PUTFIELD        (0xB5)
#define BYTECODE_B6_INVOKEVIRTUAL   (0xB6)
#define BYTECODE_B7_INVOKESPECIAL   (0xB7)
#define BYTECODE_B8_INVOKESTATIC    (0xB8)
#define BYTECODE_B9_INVOKEINTERFACE (0xB9)
#define BYTECODE_BA_INVOKEDYNAMIC   (0xBA)
#define BYTECODE_BB_NEW             (0xBB)
#define BYTECODE_BC_NEWARRAY        (0xBC)
#define BYTECODE_BD_ANEWARRAY       (0xBD)
#define BYTECODE_BE_ARRAYLENGTH     (0xBE)
#define BYTECODE_BF_ATHROW          (0xBF)
#define BYTECODE_C0_CHECKCAST       (0xC0)
#define BYTECODE_C1_INSTANCEOF      (0xC1)
#define BYTECODE_C2_MONITORENTER    (0xC2)
#define BYTECODE_C3_MONITOREXIT     (0xC3)
#define BYTECODE_C4_WIDE            (0xC4)
#define BYTECODE_C5_MULTINEWARRAY   (0xC5)
#define BYTECODE_C6_IFNULL          (0xC6)
#define BYTECODE_C7_IFNONNULL       (0xC7)
#define BYTECODE_C8_GOTO_W          (0xC8)
#define BYTECODE_C9_JSR_W           (0xC9)
#define BYTECODE_CA_BREAKPOINT      (0xCA)
#define BYTECODE_FE_IMPDEP1         (0xFE)
#define BYTECODE_FF_IMPDEP2         (0xFF)

typedef enum {
	BYTECODE_TYPE_INVALID = 0,
	BYTECODE_TYPE_NUMBER,
	BYTECODE_TYPE_CONST_POOL,
	BYTECODE_TYPE_ADDRESS,
	BYTECODE_TYPE_ATYPE,
} BytecodeType;

typedef struct tableswitch_t {
	ut32 pc_default;
	ut32 low;
	ut32 high;
	ut32 length;
} TableSwitch;

typedef struct lookupswitch_t {
	ut32 pc_default;
	ut32 npairs;
} LookupSwitch;

typedef struct bytecode_t {
	char name[32];
	ut64 atype;
	ut16 opcode;
	ut16 size;
	ut64 pc;
	st32 args[2];
	ut32 type[2];
	st32 stack_input;
	st32 stack_output;
	void *extra;
} Bytecode;

#endif /* RZ_ASM_JAVA_BYTECODE_H */
