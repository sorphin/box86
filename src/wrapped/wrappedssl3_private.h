#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

//GO(DTLS_GetHandshakeTimeout, 
//GO(DTLS_ImportFD, 
//GO(NSS_CmpCertChainWCANames, 
//GO(NSS_FindCertKEAType, 
//GO(NSS_GetClientAuthData, 
GO(NSS_SetDomesticPolicy, iFv)
//GO(NSS_SetExportPolicy, 
//GO(NSS_SetFrancePolicy, 
//GO(NSSSSL_GetVersion, 
//GO(NSSSSL_VersionCheck, 
//GO(SSL_AlertReceivedCallback, 
//GO(SSL_AlertSentCallback, 
GO(SSL_AuthCertificate, iFppii)
//GO(SSL_AuthCertificateComplete, 
GOM(SSL_AuthCertificateHook, iFEppp)
GOM(SSL_BadCertHook, iFEppp)
//GO(SSL_CanBypass, 
//GO(SSL_CertDBHandleSet, 
//GO(SSL_CipherPolicyGet, 
//GO(SSL_CipherPolicySet, 
//GO(SSL_CipherPrefGet, 
//GO(SSL_CipherPrefGetDefault, 
//GO(SSL_CipherPrefSet, 
//GO(SSL_CipherPrefSetDefault, 
//GO(SSL_ClearSessionCache, 
//GO(SSL_ConfigMPServerSIDCache, 
//GO(SSL_ConfigSecureServer, 
//GO(SSL_ConfigSecureServerWithCertChain, 
//GO(SSL_ConfigServerCert, 
//GO(SSL_ConfigServerSessionIDCache, 
//GO(SSL_ConfigServerSessionIDCacheWithOpt, 
//GO(SSL_DataPending, 
//GO(SSL_DHEGroupPrefSet, 
//GO(SSL_EnableWeakDHEPrimeGroup, 
//GO(SSL_ExportEarlyKeyingMaterial, 
//GO(SSL_ExportKeyingMaterial, 
GO(SSL_ForceHandshake, iFp)
//GO(SSL_ForceHandshakeWithTimeout, 
//GO(SSL_GetChannelInfo, 
//GO(SSL_GetCipherSuiteInfo, 
//GO(SSL_GetClientAuthDataHook, 
//GO(SSL_GetExperimentalAPI, 
//GO(SSL_GetImplementedCiphers, 
//GO(SSL_GetMaxServerCacheLocks, 
//GO(SSL_GetNegotiatedHostInfo, 
//GO(SSL_GetNextProto, 
//GO(SSL_GetNumImplementedCiphers, 
//GO(SSL_GetPreliminaryChannelInfo, 
//GO(SSL_GetSessionID, 
//GO(SSL_GetSRTPCipher, 
//GO(SSL_GetStatistics, 
//GO(SSL_HandshakeCallback, 
//GO(SSL_HandshakeNegotiatedExtension, 
GO(SSL_ImportFD, pFpp)
//GO(SSL_InheritMPServerSIDCache, 
//GO(SSL_InvalidateSession, 
//GO(SSL_LocalCertificate, 
//GO(SSL_NamedGroupConfig, 
//GO(SSL_OptionGet, 
//GO(SSL_OptionGetDefault, 
GO(SSL_OptionSet, iFpil)
//GO(SSL_OptionSetDefault, 
//GO(SSL_PeerCertificate, 
//GO(SSL_PeerCertificateChain, 
//GO(SSL_PeerSignedCertTimestamps, 
//GO(SSL_PeerStapledOCSPResponses, 
//GO(SSL_PreencryptedFileToStream, 
//GO(SSL_PreencryptedStreamToFile, 
//GO(SSL_RecommendedCanFalseStart, 
//GO(SSL_ReconfigFD, 
//GO(SSL_ReHandshake, 
//GO(SSL_ReHandshakeWithTimeout, 
GO(SSL_ResetHandshake, iFpi)
//GO(SSL_RestartHandshakeAfterCertReq, 
//GO(SSL_RestartHandshakeAfterServerCert, 
//GO(SSL_RevealCert, 
//GO(SSL_RevealPinArg, 
//GO(SSL_RevealURL, 
//GO(SSL_SecurityStatus, 
//GO(SSL_SendAdditionalKeyShares, 
//GO(SSL_SetCanFalseStartCallback, 
//GO(SSL_SetDowngradeCheckVersion, 
//GO(SSL_SetMaxServerCacheLocks, 
//GO(SSL_SetNextProtoCallback, 
//GO(SSL_SetNextProtoNego, 
//GO(SSL_SetPKCS11PinArg, 
//GO(SSL_SetSessionTicketKeyPair, 
//GO(SSL_SetSignedCertTimestamps, 
//GO(SSL_SetSockPeerID, 
//GO(SSL_SetSRTPCiphers, 
//GO(SSL_SetStapledOCSPResponses, 
//GO(SSL_SetTrustAnchors, 
GO(SSL_SetURL, iFpp)
//GO(SSL_ShutdownServerSessionIDCache, 
//GO(SSL_SignatureMaxCount, 
//GO(SSL_SignaturePrefGet, 
//GO(SSL_SignaturePrefSet, 
//GO(SSL_SignatureSchemePrefGet, 
//GO(SSL_SignatureSchemePrefSet, 
//GO(SSL_SNISocketConfigHook, 
//GO(SSL_VersionRangeGet, 
//GO(SSL_VersionRangeGetDefault, 
//GO(SSL_VersionRangeGetSupported, 
//GO(SSL_VersionRangeSet, 
//GO(SSL_VersionRangeSetDefault, 