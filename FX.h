// FX.h
#import <Foundation/Foundation.h>

@interface FX : NSObject {
}

    var $dataServer = "";
    var $dataServerType = 'fmpro';
    var $dataServerVersion = 7;
    var $dataPort;
    var $dataPortSuffix;
    var $urlScheme;
    var $useSSLProtocol = false;
    var $verifyPeer = true;
    var $database = "";
    var $layout = ""; // the layout to be accessed for FM databases.  For SQL, the table to be accessed.
    var $responseLayout = "";
    var $groupSize;
    var $currentSkip = 0;
    var $defaultOperator = 'bw';
    var $findquerynumber = 1;
    var $findquerystring = '';
    var $dataParams = array();
    var $sortParams = array();
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
    var $primaryKeyField = '';
    var $modifyDateField = '';
    var $dataKeySeparator = '';
    var $fuzzyKeyLogic = false;
    var $genericKeys = false;
    var $selectColsSet = false;
    var $selectColumns = '';

    // These are the variables to be used for storing the retrieved data.
    var $fieldInfo = array();
    var $currentData = array();
    var $valueLists = array();
    var $totalRecordCount = -1;
    var $foundCount = -1;
    var $dateFormat = "";
    var $timeFormat = "";
    var $dataQuery = "";

    // Variables used to track how data is moved in and out of FileMaker.  Used when UTF-8 just doesn't cut it (as when working with Japanese characters.)
    // This and all related code were submitted by Masayuki Nii.
    // Note that if either of these variables are simply empty, UTF-8 is the default.
    var $charSet = '';                                                  // Determines how outgoing data is encoded.
    var $dataParamsEncoding = '';                                       // Determines how incoming data is encoded.

    var $remainNames = array();    // Added by Masayuki Nii(nii@msyk.net) Dec 18, 2010
    var $remainNamesReverse = array();    // Added by Masayuki Nii(nii@msyk.net) Jan 23, 2010
    var $portalAsRecord =false;    // Added by Masayuki Nii(nii@msyk.net) Dec 18, 2010

    var $usePortalIDs = false;    // for use with the RetrieveFM7VerboseData.class "fmalt"

    // Flags and Error Tracking
    var $fieldCount = 0;
    var $fxError = 'No Action Taken';
    var $errorTracking = 0;
    var $useInnerArray = null;                                              // Do NOT change this variable directly.  Use FlattenInnerArray() or the appropriate param of action method.
    var $useComma2Period = false;

    // These variables will be used if you need a password to access your data.
    var $DBUser = 'FX';
    var $DBPassword = '';                                                 // This can be left blank, or replaced with a default or dummy password.
    var $userPass = '';

    // These variables are related to sending data to FileMaker via a Post.
    var $defaultPostPolicy = true;
    var $isPostQuery;
    var $defaultFOpenPolicy = false;
    var $isFOpenQuery;
    var $useCURL = true;
    var $customPrimaryKey = '';

    // When returning your data via the 'object' return type, these variables will contain the database meta data
    var $lastLinkPrevious = '';
    var $lastLinkNext = '';
    var $lastFoundCount = -2;
    var $lastFields = array();
    var $lastURL = '';
    var $lastQuery = '';
    var $lastQueryParams = array();
    var $lastErrorCode = -2;
    var $lastValueLists = array();
    var $lastDebugMessage = '';

    // Other variables
    var $fuzzyFXPass = ''; // this is to handle the fact that I couldn't provide a default value for a pass-by-value param in PHP4


@property (copy) NSString *host;
@property (copy) NSString *port;
@property (copy) NSString *protocol;
@property (copy) NSString *grammar;

- (void)EmailError ($errorText) {
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
