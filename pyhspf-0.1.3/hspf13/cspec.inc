C     from CSPEC.INC   
C     run interpreter common
C     special action version
C
C     + + + PARAMETERS + + +
      INCLUDE 'pmxopn.inc'
      INCLUDE 'pmxvnm.inc'
C
      COMMON/CRINTP/FILE,DUMT1,DUMT2,DUMT3,WCOUNT,ECOUNT,OUTLEV,
     $              RESMFG,NIVLS,IVLLIB,NXGRPS,EXGTAB,NGRPS,GRPTAB,
     $              NOPNS,OPNO,OPNTAB,VDIM,VLOC,LOSPFL,LOSPST,LOSPKY,
     $              LOSPLV,LOSPNU,LONAM,LONUM,DUM
      INTEGER       FILE(15),DUMT1,DUMT2,DUMT3,WCOUNT(10),ECOUNT,
     $              OUTLEV,RESMFG,NIVLS,IVLLIB(20),NXGRPS,
     $              EXGTAB(5,10),NGRPS,GRPTAB(5,10),NOPNS,OPNO,
     $              OPNTAB(20,MAXOPN),VDIM(3,MAXVNM),VLOC(MAXVNM),
     $              LOSPFL(15),LOSPST(15),LOSPKY(15),LOSPLV(15),
     $              LOSPNU(15),LONAM(15),LONUM(15)
      INTEGER       DUM(4939)
C     end byte:  88000 word:22000
C
      COMMON/VNAMES/VNAMLB,OPTYLB
      CHARACTER*6   VNAMLB(MAXVNM),OPTYLB(15)
C
C     + + + EQUIVALENCES + + +
      EQUIVALENCE (VNAMLB,VNAML1),(OPTYLB,OPTYL1)
      CHARACTER*1  VNAML1(MAXVNM*6),OPTYL1(90)
C