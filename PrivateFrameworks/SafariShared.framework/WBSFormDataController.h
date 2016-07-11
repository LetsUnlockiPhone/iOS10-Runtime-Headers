/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormDataController : NSObject {
    NSDictionary * _allCredentialsCache;
    NSObject<OS_dispatch_queue> * _allCredentialsCacheAccessQueue;
    NSMutableDictionary * _completionDB;
    unsigned long long  _completionDBSize;
    NSMutableDictionary * _domainToLastUsedUsernameAndProtectionSpace;
    int  _keychainChangedNotificationToken;
    NSMutableDictionary * _preferredLabelForUniqueIDOfPersonMap;
    NSMutableDictionary * _preferredLabelsMap;
    NSMutableArray * _recentlyUsedAutoFillSets;
    NSMutableDictionary * _valuesDB;
}

+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (id)addressBookAddressPropertyKey;
+ (id)allAddressBookAddressComponentKeys;
+ (id)allAddressBookNonAddressPropertyKeys;
+ (long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id*)arg3 outPasswordElementUniqueID:(id*)arg4 outConfirmPasswordElementUniqueID:(id*)arg5;
+ (bool)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (bool)contactIsMe:(id)arg1;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(bool)arg3 ignorePositioning:(bool)arg4;
+ (id)controlsConsideredByAutoFillInForm:(id)arg1;
+ (bool)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long*)arg2;
+ (id)domainFromURL:(id)arg1;
+ (id)dontSaveMarker;
+ (bool)formContainsCreditCardData:(id)arg1;
+ (bool)formContainsCreditCardNumberField:(id)arg1;
+ (id)nextFieldAfterControls:(id)arg1 inForm:(id)arg2;
+ (id)specifierForControl:(id)arg1;
+ (bool)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;

- (void).cxx_destruct;
- (void)_addControlIDToAutoFillValuesToAutoFillItems:(id)arg1 formMetadata:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (unsigned long long)_addMatchesForControl:(id)arg1 startingAtIndex:(unsigned long long)arg2 formMetadata:(id)arg3 fromExistingMatches:(id)arg4 fromAllMatchesIfNecessary:(id)arg5 addToFoundMatches:(id)arg6 addToAutoFillValues:(id)arg7 multiRoundAutoFillManager:(id)arg8 propertyToIdentifierMapForFoundMatches:(id)arg9 shouldUseEachExistingMatchOnce:(bool)arg10;
- (void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id*)arg2;
- (bool)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg1 specifier:(id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4;
- (id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(bool)arg2;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)_singleFieldPhoneNumberCandidates:(id)arg1;
- (id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(bool)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(bool)arg7 contact:(id)arg8 shouldRemoveCompanyFromAutoFillMatchesIfHomeAddressFound:(bool)arg9 existingMatches:(id)arg10 shouldUseEachExistingMatchOnce:(bool)arg11 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg12;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame {}**)arg2 forPrefillingCredentials:(bool)arg3;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 contact:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (void)addRecentlyUsedAutoFillSet:(id)arg1 appendToTheEnd:(bool)arg2;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (id)allFormDataForSaving;
- (id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg7;
- (id)cascadingAddressMatchesForMatch:(id)arg1 contact:(id)arg2;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)completionDBPath;
- (id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (void)dealloc;
- (id)deserializedRecentlyUsedAutoFillSets;
- (id)domainsWithPreviousData;
- (void)domainsWithPreviousDataChanged;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(bool)arg2;
- (void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4;
- (void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(bool)arg5;
- (void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (bool)hasCredentialsForPageWithMainFrame:(id)arg1;
- (bool)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (id)init;
- (id)lastUsedUsernameForURL:(id)arg1;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id*)arg2;
- (void)loadCompletionDBIfNeeded;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg5;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (id)matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (id)matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg7;
- (id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(struct OpaqueFormAutoFillFrame {}**)arg2 forPrefillingCredentials:(bool)arg3;
- (bool)preferredIdentifierExistsForProperty:(id)arg1;
- (bool)preferredIdentifierExistsForProperty:(id)arg1 withContact:(id)arg2;
- (id)preferredIdentifierForProperty:(id)arg1;
- (id)preferredIdentifierForProperty:(id)arg1 withContact:(id)arg2;
- (void)pruneCompletionDB;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (id)recentlyUsedAutoFillSets;
- (void)saveCompletionDBSoon;
- (void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg1 matchesForDoNotFill:(id)arg2;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 withContact:(id)arg3;
- (bool)shouldAutoFillFromAddressBook;
- (bool)shouldAutoFillFromPreviousData;
- (bool)shouldAutoFillPasswords;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (id)uniqueIDOfContact:(id)arg1;
- (void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id*)arg3 multiRoundAutoFillManager:(id)arg4;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id*)arg3 multiRoundAutoFillManager:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id*)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id*)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 shouldUseEachExistingMatchOnce:(bool)arg5 contact:(id)arg6;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(bool)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(bool)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 shouldRemoveCompanyFromAutoFillMatchesIfHomeAddressFound:(bool)arg7 contact:(id)arg8 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg9;
- (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4;

@end