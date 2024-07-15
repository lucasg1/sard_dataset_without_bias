void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"badXXXXXX";
        FILE *pFile;
        filename = MKTEMP(tmpl);
        if (filename != NULL)
        {
            pFile = FOPEN(filename, L"w");
            if (pFile != NULL)
            {
                fprintf(pFile, "Temporary file");
                fclose(pFile);
<START>
            }
<END>
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
