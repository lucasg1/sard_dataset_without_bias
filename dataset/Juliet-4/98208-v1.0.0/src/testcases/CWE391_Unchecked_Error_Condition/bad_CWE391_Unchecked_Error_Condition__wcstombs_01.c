void FUN0()
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
