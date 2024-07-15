void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            size_t bytesTranslated = 0;
            char charString[100];
            charString[0] = '\0';
            errno = 0; 
            bytesTranslated = wcstombs((char *)&charString, L"\xffff", 100);
            if (errno == EILSEQ)
            {
                printLine("wcstombs() failed");
                exit(1);
            }
            printUnsignedLine(bytesTranslated);
            printLine(charString);
        }
    }
}
