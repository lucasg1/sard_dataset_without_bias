typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE90_LDAP_Injection__w32_wchar_t_file_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE90_LDAP_Injection__w32_wchar_t_file_34_unionType myUnion;
    wchar_t dataBuffer[256] = L"";
    data = dataBuffer;
    wcscat(data, L"Doe, XXXXX");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            LDAP* pLdapConnection = NULL;
            ULONG connectSuccess = 0L;
            ULONG searchSuccess = 0L;
            LDAPMessage *pMessage = NULL;
            wchar_t filter[256];
            _snwprintf(filter, 256-1, L"(cn=%s)", data);
            pLdapConnection = ldap_initW(L"localhost", LDAP_PORT);
            if (pLdapConnection == NULL)
            {
                printLine("Initialization failed");
                exit(1);
            }
            connectSuccess = ldap_connect(pLdapConnection, NULL);
            if (connectSuccess != LDAP_SUCCESS)
            {
                printLine("Connection failed");
                exit(1);
            }
            searchSuccess = ldap_search_ext_sW(
                                pLdapConnection,
                                L"base",
                                LDAP_SCOPE_SUBTREE,
                                filter,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                LDAP_NO_LIMIT,
                                LDAP_NO_LIMIT,
                                &pMessage);
            if (searchSuccess != LDAP_SUCCESS)
            {
                printLine("Search failed");
                if (pMessage != NULL)
                {
                    ldap_msgfree(pMessage);
                }
                exit(1);
            }
            if (pMessage != NULL)
            {
                ldap_msgfree(pMessage);
            }
            ldap_unbind(pLdapConnection);
        }
    }
}
