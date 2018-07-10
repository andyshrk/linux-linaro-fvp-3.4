#ifndef _VMFSNO_H_
#define _VMFSNO_H_

/* these define the attribute byte as seen by DOS */
#define aRONLY  (1L<<0)
#define aHIDDEN (1L<<1)
#define aSYSTEM (1L<<2)
#define aVOLID  (1L<<3)
#define aDIR    (1L<<4)
#define aARCH   (1L<<5)

/* error classes */
#define SUCCESS 0  /* The request was successful. */
#define ERRDOS 0x01 /*  Error is from the core DOS operating system set. */
#define ERRSRV 0x02 /* Error is generated by the server network file manager.*/
#define ERRHRD 0x03  /* Error is an hardware error. */
#define ERRCMD 0xFF  /* Command was not in the "VMFS" format. */

/* VMFS X/Open error codes for the ERRdos error class */

#define ERRbadfunc 1            /* Invalid function (or system call) */
#define ERRbadfile 2            /* File not found (pathname error) */
#define ERRbadpath 3            /* Directory not found */
#define ERRnofids 4             /* Too many open files */
#define ERRnoaccess 5           /* Access denied */
#define ERRbadfid 6             /* Invalid fid */
#define ERRbadmcb 7             /* Memory control blocks destroyed */
#define ERRnomem 8              /* Out of memory */
#define ERRbadmem 9             /* Invalid memory block address */
#define ERRbadenv 10            /* Invalid environment */
#define ERRbadformat 11         /* Invalid format */
#define ERRbadaccess 12         /* Invalid open mode */
#define ERRbaddata 13           /* Invalid data (only from ioctl call) */
#define ERRres 14               /* reserved */
#define ERRbaddrive 15          /* Invalid drive */
#define ERRremcd 16             /* Attempt to delete current directory */
#define ERRdiffdevice 17        /* rename/move across different filesystems */
#define ERRnofiles 18           /* no more files found in file search */
#define ERRbadshare 32          /* Share mode on file conflict with open mode */
#define ERRlock 33              /* Lock request conflicts with existing lock */
#define ERRfilexists 80         /* File in operation already exists */
#define ERRbadpipe 230          /* Named pipe invalid */
#define ERRpipebusy 231         /* All instances of pipe are busy */
#define ERRpipeclosing 232      /* named pipe close in progress */
#define ERRnotconnected 233     /* No process on other end of named pipe */
#define ERRmoredata 234         /* More data to be returned */

#define ERROR_INVALID_PARAMETER  87
#define ERROR_DISK_FULL     112
#define ERROR_INVALID_NAME  123
#define ERROR_DIR_NOT_EMPTY 145
#define ERROR_NOT_LOCKED    158
#define ERROR_ALREADY_EXISTS    183  /* see also 80 ? */
#define ERROR_EAS_DIDNT_FIT 275 /* Extended attributes didn't fit */
#define ERROR_EAS_NOT_SUPPORTED 282 /* Extended attributes not supported */

/* Error codes for the ERRSRV class */

#define ERRerror 1              /* Non specific error code */
#define ERRbadpw 2              /* Bad password */
#define ERRbadtype 3            /* reserved */
#define ERRaccess 4          /* No permissions to do the requested operation */
#define ERRinvnid 5             /* tid invalid */
#define ERRinvnetname 6         /* Invalid servername */
#define ERRinvdevice 7          /* Invalid device */
#define ERRqfull 49             /* Print queue full */
#define ERRqtoobig 50           /* Queued item too big */
#define ERRinvpfid 52           /* Invalid print file in vmfs_fid */
#define ERRvmfscmd 64            /* Unrecognised command */
#define ERRsrverror 65          /* vmfs server internal error */
#define ERRfilespecs 67         /* fid and pathname invalid combination */
#define ERRbadlink 68           /* reserved */
#define ERRbadpermits 69        /* Access specified for a file is not valid */
#define ERRbadpid 70            /* reserved */
#define ERRsetattrmode 71       /* attribute mode invalid */
#define ERRpaused 81            /* Message server paused */
#define ERRmsgoff 82            /* Not receiving messages */
#define ERRnoroom 83            /* No room for message */
#define ERRrmuns 87             /* too many remote usernames */
#define ERRtimeout 88           /* operation timed out */
#define ERRnoresource  89   /* No resources currently available for request. */
#define ERRtoomanyuids 90       /* too many userids */
#define ERRbaduid 91            /* bad userid */
#define ERRuseMPX 250    /* temporarily unable to use raw mode, use MPX mode */
#define ERRuseSTD 251    /* temporarily unable to use raw mode, use std.mode */
#define ERRcontMPX 252          /* resume MPX mode */
#define ERRbadPW                /* reserved */
#define ERRnosupport 0xFFFF

/* Error codes for the ERRHRD class */

#define ERRnowrite 19           /* read only media */
#define ERRbadunit 20           /* Unknown device */
#define ERRnotready 21          /* Drive not ready */
#define ERRbadcmd 22            /* Unknown command */
#define ERRdata 23              /* Data (CRC) error */
#define ERRbadreq 24            /* Bad request structure length */
#define ERRseek 25
#define ERRbadmedia 26
#define ERRbadsector 27
#define ERRnopaper 28
#define ERRwrite 29             /* write fault */
#define ERRread 30              /* read fault */
#define ERRgeneral 31           /* General hardware failure */
#define ERRwrongdisk 34
#define ERRFCBunavail 35
#define ERRsharebufexc 36       /* share buffer exceeded */
#define ERRdiskfull 39

/*
 * Access modes when opening a file
 */
#define VMFS_ACCMASK    0x0003
#define VMFS_O_RDONLY   0x0000
#define VMFS_O_WRONLY   0x0001
#define VMFS_O_RDWR 0x0002

/* values which means "don't change it" */
#define VMFS_MODE_NO_CHANGE     0xFFFFFFFF
#define VMFS_UID_NO_CHANGE      0xFFFFFFFF
#define VMFS_GID_NO_CHANGE      0xFFFFFFFF
#define VMFS_TIME_NO_CHANGE     0xFFFFFFFFFFFFFFFFULL
#define VMFS_SIZE_NO_CHANGE     0xFFFFFFFFFFFFFFFFULL

/* UNIX filetype mappings. */
#define UNIX_TYPE_FILE      0
#define UNIX_TYPE_DIR       1
#define UNIX_TYPE_SYMLINK   2
#define UNIX_TYPE_CHARDEV   3
#define UNIX_TYPE_BLKDEV    4
#define UNIX_TYPE_FIFO      5
#define UNIX_TYPE_SOCKET    6
#define UNIX_TYPE_UNKNOWN   0xFFFFFFFF

#endif /* _VMFSNO_H_ */
