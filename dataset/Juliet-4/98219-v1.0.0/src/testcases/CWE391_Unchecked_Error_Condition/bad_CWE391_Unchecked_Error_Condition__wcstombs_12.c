void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t bytesTranslated = 0;
            char charString[100];
            charString[0] = '\0';
            bytesTranslated = wcstombs((char *)&charString, L"\xffff", 100);
<START>
<END>
            printUnsignedLine(bytesTranslated);
            printLine(charString);
        }
    }
    else
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
