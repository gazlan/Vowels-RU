/* ******************************************************************** **
** @@ FileFind
** @  Copyrt : 
** @  Author : 
** @  Modify :
** @  Update : 
** @  Dscr   :
** ******************************************************************** */

#ifndef _FILE_FIND_H_
#define _FILE_FIND_H_

#if _MSC_VER > 1000
#pragma once
#endif

/* ******************************************************************** **
** @@                   internal defines
** ******************************************************************** */

/* ******************************************************************** **
** @@                   internal prototypes
** ******************************************************************** */

/* ******************************************************************** **
** @@                   external global variables
** ******************************************************************** */

/* ******************************************************************** **
** @@                   static global variables
** ******************************************************************** */

/* ******************************************************************** **
** @@ Class FindFile
** ******************************************************************** */

class FindFile
{
   private:

      HANDLE            _hFile;
      bool              _bFirstCall;

   public:

      WIN32_FIND_DATA   _w32fd;
      char              _pszFileMask[MAX_PATH + 1];
      char              _pszPrefix[MAX_PATH + 1];

   public:

       FindFile();
      ~FindFile();

      void              SetPrefix(const char* const pszPrefix);
      void              SetMask(const char* const pszFileMask);
      bool              Fetch();
      void              Walk();
      void              Init();

   private:

      bool              FindFirst();
      bool              FindNext();
      void              Loop();

   protected:

      virtual void      AppendFile();
};

/* ******************************************************************** **
** @@                   End of File
** ******************************************************************** */

#endif
