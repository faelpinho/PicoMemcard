#ifndef __LFS_DISK_H__
#define __LFS_DISK_H__

#include <stdint.h>
#include "lfs.h"
#include "lfs_flash_handler.h"

#define LFS_BLOCK_COUNT 70
#define LFS_BLOCK_SIZE 4096

#define MEMCARD_FILE_NAME "memcard.mcr"     // name of memcard file inside system

/* LittleFS filesystem configuration */
extern const struct lfs_config LFS_CFG;

#endif