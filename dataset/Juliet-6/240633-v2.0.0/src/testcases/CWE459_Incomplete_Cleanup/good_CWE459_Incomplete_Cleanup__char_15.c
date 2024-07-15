static int FUN0(const char * t){
  size_t l = strlen(t) + 1;
  char s[50];
  strncpy(s, t, l);
  return _mktemp_s(s, l) ? -1 : _open(s, _O_CREAT|_O_EXCL);
}
void FUN1()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char filename[] = "goodXXXXXX";
        FILE *pFile;
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1)
        {
            pFile = FDOPEN(fileDesc, "w");
            if (pFile != NULL)
            {
                fprintf(pFile, "Temporary file");
                fclose(pFile);
                UNLINK(filename); 
            }
        }
    }
    break;
    }
}
void FUN2()
{
    switch(6)
    {
    case 6:
    {
        char filename[] = "goodXXXXXX";
        FILE *pFile;
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1)
        {
            pFile = FDOPEN(fileDesc, "w");
            if (pFile != NULL)
            {
                fprintf(pFile, "Temporary file");
                fclose(pFile);
                UNLINK(filename); 
            }
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
