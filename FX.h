// FX.h
#import <Foundation/Foundation.h>

@interface FX : NSObject {

@property ( nonatomic, strong ) NSString *dataServer;
@property ( nonatomic, strong ) NSString *dataServerType;
@property ( nonatomic, strong ) NSNumber *dataServerVersion;
@property ( nonatomic, strong ) NSNumber *dataPort;
@property ( nonatomic, strong ) NSString *dataPortSuffix;
@property ( nonatomic, strong ) NSString *urlScheme;
@property ( nonatomic, strong ) NSString *protocol;
@property ( nonatomic, strong ) BOOL *useSSLProtocol;
@property ( nonatomic, strong ) BOOL *verifyPeer;
@property ( nonatomic, strong ) NSString *database;
@property ( nonatomic, strong ) NSString *layout;
@property ( nonatomic, strong ) NSString *responseLayout;
@property ( nonatomic, strong ) NSNumber *groupSize;
@property ( nonatomic, strong ) NSNumber *currentSkip;
@property ( nonatomic, strong ) NSString *defaultOperator;
@property ( nonatomic, strong ) NSString *findquerynumber;
@property ( nonatomic, strong ) NSString *findquerystring;
@property ( nonatomic, strong ) NSArray *dataParams;
@property ( nonatomic, strong ) NSArray *sortParams;
@property ( nonatomic, strong ) NSDictionary *actionArray;

    var $actionArray = array(
            // for backwards compatibility
            "-delete"               =>"-delete",
            "-dup"                  =>"-dup",
            "-edit"                 =>"-edit",
            "-find"                 =>"-find",
            "-findall"              =>"-findall",
            "-findany"              =>"-findany",
            '-findquery'            =>'-findquery',
            "-new"                  =>"-new",
            "-view"                 =>"-view",
            "-dbnames"              =>"-dbnames",
            "-layoutnames"          =>"-layoutnames",
            "-scriptnames"          =>"-scriptnames",
            "-sqlquery"             =>"-sqlquery",
            // new params for DoFXAction
            "delete"                =>"-delete",
            "duplicate"             =>"-dup",
            "update"                =>"-edit",
            "perform_find"          =>"-find",
            "show_all"              =>"-findall",
            "show_any"              =>"-findany",
            "new"                   =>"-new",
            "view_layout_objects"   =>"-view",
            "view_database_names"   =>"-dbnames",
            "view_layout_names"     =>"-layoutnames",
            "view_script_names"     =>"-scriptnames"
        );

    // Variables to help with SQL queries
@property ( nonatomic, strong ) NSString *primaryKeyField;
@property ( nonatomic, strong ) NSString *modifyDateField;
@property ( nonatomic, strong ) NSString *dataKeySeparator;
@property ( nonatomic, strong ) BOOL *fuzzyKeyLogic;
@property ( nonatomic, strong ) BOOL *genericKeys;
@property ( nonatomic, strong ) BOOL *selectColsSet;
@property ( nonatomic, strong ) NSString *selectColumns;

    // These are the variables to be used for storing the retrieved data.
@property ( nonatomic, strong ) NSArray *fieldInfo;
@property ( nonatomic, strong ) NSDictionary *currentData;
@property ( nonatomic, strong ) NSDictionary *valueLists;
@property ( nonatomic, strong ) NSNumber *totalRecordCount;
@property ( nonatomic, strong ) NSNumber *foundCount;
@property ( nonatomic, strong ) NSString *dateFormat;
@property ( nonatomic, strong ) NSString *timeFormat;
@property ( nonatomic, strong ) NSString *dataQuery;

@property ( nonatomic, strong ) NSString *charSet;
@property ( nonatomic, strong ) NSString *dataParamsEncoding;

@property ( nonatomic, strong ) NSArray *remainNames;
@property ( nonatomic, strong ) NSArray *remainNamesReverse;
@property ( nonatomic, strong ) BOOL *portalAsRecord;

@property ( nonatomic, strong ) BOOL *usePortalIDs;

@property ( nonatomic, strong ) NSNumber *fieldCount;
@property ( nonatomic, strong ) NSString *fxError;
@property ( nonatomic, strong ) NSNumber *errorTracking;
@property ( nonatomic, strong ) NSNumber *useInnerArray;
@property ( nonatomic, strong ) BOOL *useComma2Period;

@property ( nonatomic, strong ) NSString *DBUser;
@property ( nonatomic, strong ) NSString *DBPassword;
@property ( nonatomic, strong ) NSString *userPass;

@property ( nonatomic, strong ) BOOL *defaultPostPolicy;
@property ( nonatomic, strong ) BOOL *isPostQuery;
@property ( nonatomic, strong ) BOOL *defaultFOpenPolicy;
@property ( nonatomic, strong ) BOOL *isFOpenQuery;
@property ( nonatomic, strong ) BOOL *useCURL;
@property ( nonatomic, strong ) NSString *customPrimaryKey;

// When returning your data via the 'object' return type, these variables will contain the database meta data
@property ( nonatomic, strong ) NSString *lastLinkPrevious;
@property ( nonatomic, strong ) NSString *lastLinkNext;
@property ( nonatomic, strong ) NSNumber *lastFoundCount;
@property ( nonatomic, strong ) NSArray *lastFields;
@property ( nonatomic, strong ) NSString *lastURL;
@property ( nonatomic, strong ) NSString *lastQuery;
@property ( nonatomic, strong ) NSArray *lastQueryParams;
@property ( nonatomic, strong ) NSNumber *lastErrorCode;
@property ( nonatomic, strong ) NSArray *lastValueLists;
@property ( nonatomic, strong ) NSString *lastDebugMessage;

// Other variables
@property ( nonatomic, strong ) NSString *fuzzyFXPass; // this is to handle the fact that I couldn't provide a default value for a pass-by-value param in PHP4
}

- (void)EmailError ( errorText ) {
}
- (void)EmailErrorHandler ( FXErrorObj) {
}
- (void)FX ( dataServer, dataPort=80, dataType='', dataURLType='' ) {
}
- (void)BuildExtendedChar ($byteOne, $byteTwo="\x00", $byteThree="\x00", $byteFour="\x00") {
}
- (void)ClearAllParams () {
}
- (void)ErrorHandler ($errorText) {
}
- (void)ExecuteQuery ($action) {
}
- (void)BuildLinkQueryString () {
}
- (void)AssembleDataSet ($returnData) {
}
- (void)FMAction ($Action, $returnDataSet, $returnData, $useInnerArray) {
}
- (void)isError($data) {
}
- (void)SetCharacterEncoding ($encoding) {
}
- (void)SetDataParamsEncoding ($encoding) {
}
- (void)SetDBData ($database, $layout="", $groupSize=50, $responseLayout="") {
}
- (void)SetDBPassword ($DBPassword, $DBUser='FX') {
}
- (void)SetDBUserPass ($DBUser, $DBPassword='') {
}
- (void)SetCustomPrimaryKey( $fieldname ) {
}
- (void)SetNumberAutoConversionComma2PeriodForDecimal( ) {
}
- (void)SetDefaultOperator ($op) {
}
- (void)FindQuery_DuplicateExists($name, $value){
}
- (void)FindQuery_Append($namevaluepair = array(), $doModify = true){
}
- (void)FindQuery_Omit($namevaluepair = array(), $doModify = true){
}
- (void)GetKeyPairDataParams(){
}
- (void)FindQuery_AND($namevaluepair = array(), $fieldnames = array(), $querystring = '', $doModify = true){
}
- (void)AddDBParam ($name, $value, $op="") {
}
- (void)AddDBParamArray ($paramsArray, $paramOperatorsArray=array()) {
}
- (void)SetPortalRow ($fieldsArray, $portalRowID=0, $relationshipName='') {
}
- (void)SetRecordID ($recordID) {
}
- (void)SetModID ($modID) {
}
- (void)SetLogicalOR () {
}
- (void)SetFMGlobal ($globalFieldName, $globalFieldValue) {
}
- (void)PerformFMScript ($scriptName) {
}
- (void)PerformFMScriptPrefind ($scriptName) {
}
- (void)PerformFMScriptPresort ($scriptName) {
}
- (void)AddSortParam ($field, $sortOrder='', $performOrder=0) {
}
- (void)FMSkipRecords ($skipSize) {
}
- (void)FMPostQuery ($isPostQuery = true) {
}
- (void)FMFOpenQuery ($isFOpenQuery = true) {
}
- (void)FMUseCURL ($useCURL = true) {
}
- (void)FlattenInnerArray () {
}
- (void)FMDBOpen () {
}
- (void)FMDBClose () {
}
- (void)FMDelete ($returnDataSet = false, $returnData = 'basic', $useInnerArray = true) {
}
- (void)FMDup ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMEdit ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFind ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindAll ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindAny ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindQuery ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMNew ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMView ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMDBNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMLayoutNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMScriptNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)DoFXAction ($currentAction, $returnDataSet = true, $useInnerArray = false, $returnType = 'object') {
}
- (void)PerformSQLQuery ($SQLQuery, $returnDataSet = true, $useInnerArray = false, $returnData = 'object') {
}
- (void)SetDataKey ($keyField, $modifyField = '', $separator = '.') {
}
- (void)SetSelectColumns ($columnList) {
}
- (void)SQLFuzzyKeyLogicOn ($logicSwitch = false) {
}
- (void)UseGenericKeys ($genericKeys=true) {
}
- (void)RemainAsArray (- (void)EmailError ($errorText) {
}
- (void)EmailErrorHandler ($FXErrorObj) {
}
- (void)FX ($dataServer, $dataPort=80, $dataType='', $dataURLType='') {
}
- (void)BuildExtendedChar ($byteOne, $byteTwo="\x00", $byteThree="\x00", $byteFour="\x00") {
}
- (void)ClearAllParams () {
}
- (void)ErrorHandler ($errorText) {
}
- (void)ExecuteQuery ($action) {
}
- (void)BuildLinkQueryString () {
}
- (void)AssembleDataSet ($returnData) {
}
- (void)FMAction ($Action, $returnDataSet, $returnData, $useInnerArray) {
}
- (void)isError($data) {
}
- (void)SetCharacterEncoding ($encoding) {
}
- (void)SetDataParamsEncoding ($encoding) {
}
- (void)SetDBData ($database, $layout="", $groupSize=50, $responseLayout="") {
}
- (void)SetDBPassword ($DBPassword, $DBUser='FX') {
}
- (void)SetDBUserPass ($DBUser, $DBPassword='') {
}
- (void)SetCustomPrimaryKey( $fieldname ) {
}
- (void)SetNumberAutoConversionComma2PeriodForDecimal( ) {
}
- (void)SetDefaultOperator ($op) {
}
- (void)FindQuery_DuplicateExists($name, $value)
- (void)FindQuery_Append($namevaluepair = array(), $doModify = true)
- (void)FindQuery_Omit($namevaluepair = array(), $doModify = true)
- (void)GetKeyPairDataParams()
- (void)FindQuery_AND($namevaluepair = array(), $fieldnames = array(), $querystring = '', $doModify = true)
- (void)AddDBParam ($name, $value, $op="") {
}
- (void)AddDBParamArray ($paramsArray, $paramOperatorsArray=array()) {
}
- (void)SetPortalRow ($fieldsArray, $portalRowID=0, $relationshipName='') {
}
- (void)SetRecordID ($recordID) {
}
- (void)SetModID ($modID) {
}
- (void)SetLogicalOR () {
}
- (void)SetFMGlobal ($globalFieldName, $globalFieldValue) {
}
- (void)PerformFMScript ($scriptName) {
}
- (void)PerformFMScriptPrefind ($scriptName) {
}
- (void)PerformFMScriptPresort ($scriptName) {
}
- (void)AddSortParam ($field, $sortOrder='', $performOrder=0) {
}
- (void)FMSkipRecords ($skipSize) {
}
- (void)FMPostQuery ($isPostQuery = true) {
}
- (void)FMFOpenQuery ($isFOpenQuery = true) {
}
- (void)FMUseCURL ($useCURL = true) {
}
- (void)FlattenInnerArray () {
}

#pragma mark - FM Connect

- (void)FMDBOpen () {
}
- (void)FMDBClose () {
}

#pragma mark - FM Queries

- (void)FMDelete ($returnDataSet = false, $returnData = 'basic', $useInnerArray = true) {
}
- (void)FMDup ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMEdit ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFind ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindAll ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindAny ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMFindQuery ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMNew ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMView ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMDBNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMLayoutNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)FMScriptNames ($returnDataSet = true, $returnData = 'full', $useInnerArray = true) {
}
- (void)DoFXAction ($currentAction, $returnDataSet = true, $useInnerArray = false, $returnType = 'object') {
}

#pragma mark - SQL query

- (void)PerformSQLQuery ($SQLQuery, $returnDataSet = true, $useInnerArray = false, $returnData = 'object') {
}
- (void)SetDataKey ($keyField, $modifyField = '', $separator = '.') {
}
- (void)SetSelectColumns ($columnList) {
}
- (void)SQLFuzzyKeyLogicOn ($logicSwitch = false) {
}
- (void)UseGenericKeys ($genericKeys=true) {
}
- (void)RemainAsArray ( $rArray1,$rArray2=NULL,$rArray3=NULL,$rArray4=NULL,$rArray5=NULL,$rArray6=NULL,$rArray7=NULL,$rArray8=NULL,$rArray9=NULL,$rArray10=NULL,$rArray11=NULL,$rArray12=NULL ) {
}

#pragma Overwriting inherited methods

-( NSString )description {
}

@end

#pragma mark - Copyright stuff

/*
 
 FX.m
 cocoaFX
 
 Created by Gjermund Gusland Thorsen on 13.02.14.
 Copyright (c) 2014 Gjermund Gusland Thorsen. All rights reserved.
 
 
 Based on the mothership of all FileMaker CWP solutions: FX.php 6.0
 by Chris Hansen with Chris Adams, G G Thorsen, Masayuki Nii, and others
 
 Like it's mother project; FX.php, cocoaFX is also based on the same
 license namely: Artistic License and addendum (included with release)
 
 cocoaFX is a free open-source PHP class for accessing FileMaker and other databases.
 
 http://github.com/tyrfingmjolnir/cocoafx/
 */

#pragma mark - In the memory of my tribe; May Pahana be with you
