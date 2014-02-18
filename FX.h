// FX.h
#import <Foundation/Foundation.h>

@interface FX : NSObject {
}

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
