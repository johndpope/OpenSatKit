/*================================================================================*
** File:  ut_osfilesys_diskio_test.h
** Owner: Tam Ngo
** Date:  April 2013
**================================================================================*/

#ifndef _UT_OSFILESYS_DISKIO_TEST_H_
#define _UT_OSFILESYS_DISKIO_TEST_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_stubs.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

#define UT_OS_FILESYS_LIST_LEN  (NUM_TABLE_ENTRIES + 10)

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

void UT_os_initfs_test(void);

void UT_os_makefs_test(void);
void UT_os_removefs_test(void);

void UT_os_mount_test(void);
void UT_os_unmount_test(void);

void UT_os_getphysdrivename_test(void);
void UT_os_getfsinfo_test(void);
void UT_os_translatepath_test(void);

void UT_os_checkfs_test(void);

void UT_os_fsblocksfree_test(void);
void UT_os_fsbytesfree_test(void);

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSFILESYS_DISKIO_TEST_H_ */

/*================================================================================*
** End of File: ut_osfilesys_diskio_test.h
**================================================================================*/
