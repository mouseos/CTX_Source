/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

enum {
	Success = 0,
	/* ----- Error id start here ----- */
	LD_ERR_NULL_PTR = 1,
	LD_ERR_GET_COM_CHK_HDR_FAIL,
	LD_ERR_CHK_HDR_PATTERN,
	LD_ERR_RESERVE_MEM_NOT_ENOUGH,
	LD_ERR_ASS_FUNC_ALLOC_MEM_FAIL,
	LD_ERR_ASS_FUNC_GET_CHK_HDR_FAIL,
	LD_ERR_ASS_FIND_MAIN_INF_FAIL,
	LD_ERR_ASS_FIND_DSP_INF_FAIL,
	LD_ERR_ASS_FIND_ARMV7_INF_FAIL,
	LD_ERR_ASS_FIND_RAMDISK_INF_FAIL,
	LD_ERR_ASS_FIND_L1CORE_INF_FAIL,
	LD_ERR_TAG_BUF_FULL,
	LD_ERR_PAD_SIZE_LESS_THAN_64K,
	LD_ERR_PAD_INVALID_INF,
	LD_ERR_PAD_FREE_INF_ABNORMAL,
	LD_ERR_PAD_OVER_TWO_REGION,
	LD_ERR_PAD_MISC,
	LD_ERR_PAD_REGION_NOT_ENOUGH,
	LD_ERR_PAD_NO_REGION_RETRIEVE,
	LD_ERR_OPT_SETTING_INVALID,
	LD_ERR_OPT_NOT_FOUND,
	LD_ERR_OPT_CMD_BUF_ALLOC_FAIL,
	LD_ERR_PT_DEV_NULL,
	LD_ERR_PT_NOT_FOUND,
	LD_ERR_PT_READ_RAW_FAIL,
	LD_ERR_PT_IMG_LIST_NULL,
	LD_ERR_PT_ALLOC_HDR_MEM_FAIL,
	LD_ERR_PT_READ_HDR_SIZE_ABNORMAL,
	LD_ERR_PT_P_HDR_MAGIC_MIS_MATCH,
	LD_ERR_PT_MAIN_IMG_SIZE_ABNORMAL,
	LD_ERR_PT_CERT_CHAIN_FAIL,
	LD_ERR_PT_IMG_TOO_LARGE,
	LD_ERR_PT_IMG_SIZE_NOT_SYNC_CHK_HDR,
	LD_ERR_PT_ALLOC_MD_MEM_FAIL,
	LD_ERR_PT_LD_IMG_DATA_FAIL,
	LD_ERR_PT_HASH_CHK_FAIL,
	LD_ERR_PT_V2_PLAT_NOT_RDY,
	LD_ERR_PT_SMEM_SIZE_ABNORMAL,
	LD_ERR_PT_LIMIT_SETTING_ABNORMAL,
	LD_ERR_PT_ALIGN_SETTING_ABNORMAL,
	LD_ERR_PT_ALLOC_RORW_MEM_FAIL,
	LD_ERR_PT_ALLOC_SMEM_FAIL,
	LD_ERR_PT_ALLOC_CMD_BUF_FAIL,
	LD_ERR_PT_MD1_LOAD_FAIL,
	LD_ERR_PT_MD3_LOAD_FAIL,
	LD_ERR_PT_APPLY_PLAT_SETTING_FAIL,
	LD_ERR_PT_CHK_IMG_NAME_FAIL,
	LD_ERR_PLAT_INVALID_MD_ID,
	LD_ERR_PLAT_MPU_REGION_EMPTY,
	LD_ERR_PLAT_MPU_REGION_TOO_MORE,
	LD_ERR_PLAT_MPU_REGION_NUM_NOT_SYNC,
	LD_ERR_PLAT_ABNORMAL_FREE_REGION,
	LD_ERR_PLAT_ABNORMAL_PAD_ARRAY,
	LD_ERR_PLAT_NO_MORE_FREE_REGION,
	LD_ERR_PLAT_MD1_NOT_RDY,
};

static const char * const errno_str[] = {
	"Success",
	"LD_ERR_NULL_PTR",
	"LD_ERR_GET_COM_CHK_HDR_FAIL",
	"LD_ERR_CHK_HDR_PATTERN",
	"LD_ERR_RESERVE_MEM_NOT_ENOUGH",
	"LD_ERR_ASS_FUNC_ALLOC_MEM_FAIL",
	"LD_ERR_ASS_FUNC_GET_CHK_HDR_FAIL",
	"LD_ERR_ASS_FIND_MAIN_INF_FAIL",
	"LD_ERR_ASS_FIND_DSP_INF_FAIL",
	"LD_ERR_ASS_FIND_ARMV7_INF_FAIL",
	"LD_ERR_ASS_FIND_RAMDISK_INF_FAIL",
	"LD_ERR_ASS_FIND_L1CORE_INF_FAIL",
	"LD_ERR_TAG_BUF_FULL",
	"LD_ERR_PAD_SIZE_LESS_THAN_64K",
	"LD_ERR_PAD_INVALID_INF",
	"LD_ERR_PAD_FREE_INF_ABNORMAL",
	"LD_ERR_PAD_OVER_TWO_REGION",
	"LD_ERR_PAD_MISC",
	"LD_ERR_PAD_REGION_NOT_ENOUGH",
	"LD_ERR_PAD_NO_REGION_RETRIEVE",
	"LD_ERR_OPT_SETTING_INVALID",
	"LD_ERR_OPT_NOT_FOUND",
	"LD_ERR_OPT_CMD_BUF_ALLOC_FAIL",
	"LD_ERR_PT_DEV_NULL",
	"LD_ERR_PT_NOT_FOUND",
	"LD_ERR_PT_READ_RAW_FAIL",
	"LD_ERR_PT_IMG_LIST_NULL",
	"LD_ERR_PT_ALLOC_HDR_MEM_FAIL",
	"LD_ERR_PT_READ_HDR_SIZE_ABNORMAL",
	"LD_ERR_PT_P_HDR_MAGIC_MIS_MATCH",
	"LD_ERR_PT_MAIN_IMG_SIZE_ABNORMAL",
	"LD_ERR_PT_CERT_CHAIN_FAIL",
	"LD_ERR_PT_IMG_TOO_LARGE",
	"LD_ERR_PT_IMG_SIZE_NOT_SYNC_CHK_HDR",
	"LD_ERR_PT_ALLOC_MD_MEM_FAIL",
	"LD_ERR_PT_LD_IMG_DATA_FAIL",
	"LD_ERR_PT_HASH_CHK_FAIL",
	"LD_ERR_PT_V2_PLAT_NOT_RDY",
	"LD_ERR_PT_SMEM_SIZE_ABNORMAL",
	"LD_ERR_PT_LIMIT_SETTING_ABNORMAL",
	"LD_ERR_PT_ALIGN_SETTING_ABNORMAL",
	"LD_ERR_PT_ALLOC_RORW_MEM_FAIL",
	"LD_ERR_PT_ALLOC_SMEM_FAIL",
	"LD_ERR_PT_ALLOC_CMD_BUF_FAIL",
	"LD_ERR_PT_MD1_LOAD_FAIL",
	"LD_ERR_PT_MD3_LOAD_FAIL",
	"LD_ERR_PT_APPLY_PLAT_SETTING_FAIL",
	"LD_ERR_PT_CHK_IMG_NAME_FAIL",
	"LD_ERR_PLAT_INVALID_MD_ID",
	"LD_ERR_PLAT_MPU_REGION_EMPTY",
	"LD_ERR_PLAT_MPU_REGION_TOO_MORE",
	"LD_ERR_PLAT_MPU_REGION_NUM_NOT_SYNC",
	"LD_ERR_PLAT_ABNORMAL_FREE_REGION",
	"LD_ERR_PLAT_ABNORMAL_PAD_ARRAY",
	"LD_ERR_PLAT_NO_MORE_FREE_REGION",
	"LD_ERR_PLAT_MD1_NOT_RDY"
};

const char *ld_md_errno_to_str(int errno)
{
	int tmp_idx;

	if (errno == 0)
		return "Success";

	if (errno < 0)
		tmp_idx = -errno;
	else
		tmp_idx = errno;

	if (tmp_idx < (int)(sizeof(errno_str)/sizeof(char *)))
		return errno_str[tmp_idx];

	return "errno not found";
}