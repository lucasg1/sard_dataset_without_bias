void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"goodXXXXXX";
        FILE *pFile;
        filename = MKTEMP(tmpl);
        if (filename != NULL)
        {
            pFile = FOPEN(filename, L"w");
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
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"goodXXXXXX";
        FILE *pFile;
        filename = MKTEMP(tmpl);
        if (filename != NULL)
        {
            pFile = FOPEN(filename, L"w");
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
