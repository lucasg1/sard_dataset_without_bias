static int FUN0(const char * t){
  size_t l = strlen(t) + 1;
  char s[50];
  strncpy(s, t, l);
  return _mktemp_s(s, l) ? -1 : _open(s, _O_CREAT|_O_EXCL);
}
static int FUN1()
{
    return 1;
}
static int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            char * filename;
            int fileDesc;
            filename = TMPNAM(NULL);
            if (filename == NULL)
            {
                exit(1);
            }
            printLine(filename);
<START>
            fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
}
