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
        char filename[] = "/tmp/fileXXXXXX"; 
        int fileDesc = MKSTEMP(filename);
        printLine(filename);
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
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
        char filename[] = "/tmp/fileXXXXXX"; 
        int fileDesc = MKSTEMP(filename);
        printLine(filename);
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
