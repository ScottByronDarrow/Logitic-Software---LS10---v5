/*=====================================================================
|  Copyright (C) 1999 - 2000 LogisticSoftware                         |
|=====================================================================|
| $Id: ml_gl_mess.h,v 5.4 2001/08/26 22:36:59 scott Exp $
-----------------------------------------------------------------------
| $Log: ml_gl_mess.h,v $
| Revision 5.4  2001/08/26 22:36:59  scott
| Updated from scotts machine - ongoing WIP release 10.5
|
| Revision 5.3  2001/08/20 23:15:23  scott
| Updated for development related to bullet proofing
|
| Revision 5.2  2001/08/08 08:26:07  scott
| RELASE 5.0
|
| Revision 5.1  2001/07/25 01:01:56  scott
| Updated for 10.5
|
| Revision 5.0  2001/06/19 06:51:32  cha
| LS10-5.0 New Release as of 19 JUNE 2001
|
| Revision 4.0  2001/03/09 00:59:25  scott
| LS10-4.0 New Release as at 10th March 2001
|
| Revision 3.1  2000/12/12 04:50:03  scott
| Updated to place strings back into include file so plook and other utils work
|
*/
#ifndef	ML_GL_MESS_H
#define	ML_GL_MESS_H

char	*mlGlMess001 = "Access denied to General Ledger Module.",
		*mlGlMess002 = "Illegal Budget Number.",
		*mlGlMess003 = "It is illegal to mix and match GL A/C types on one journal.",
		*mlGlMess004 = "Duplicate GL Account Number.",
		*mlGlMess005 = "Account currency not equal to header currency.",
		*mlGlMess006 = "Zero is not allowed.",
		*mlGlMess007 = "Greater than 100% not allowed.",
		*mlGlMess008 = "Total is greater than 100%.",
		*mlGlMess009 = "Updating Allocation Header File.",
		*mlGlMess010 = "General Ledger Journal Allocation Maintenance.",
		*mlGlMess011 = "Total percentage: %3d",
		*mlGlMess012 = "Display/Print General Ledger Chart of Accounts.",
		*mlGlMess013 = "General ledger Inter-Company Copy.",
		*mlGlMess014 = "Module has not been closed.",
		*mlGlMess015 = "Total percentage is not equal to 100%",
		*mlGlMess016 = "Company Control Account already exists. Override [Y/N]?",
		*mlGlMess017 = "Data already exists for that company!",
		*mlGlMess018 = "Cannot copy on top of same company!",
		*mlGlMess019 = "General Ledger Account Security Maintenance",
		*mlGlMess020 = "Journal file is locked by another user and exclusive access is required.",
		*mlGlMess021 = "General Ledger Journal Page Number Input",
		*mlGlMess022 = "Invalid or non-existant P&L appropriation account setup in control accounts",
		*mlGlMess023 = "%RGeneral Ledger year end has already been run.",
		*mlGlMess024 = "No Transaction for this account!",
		*mlGlMess025 = "General Ledger Narrative Maintenance",
		*mlGlMess026 = "Debit Account : %s",
		*mlGlMess027 = "Credit Account: %s",
		*mlGlMess028 = "General Ledger Budget Maintenance",
		*mlGlMess029 = "Selection Criteria-Level :      Account(s) : %*.*s",
		*mlGlMess030 = "9s using %-16.2f",
		*mlGlMess031 = "Tagging all accounts in current list",
		*mlGlMess032 = "Entering Values for Tagged Accounts",
		*mlGlMess033 = "Creating Balances for",
		*mlGlMess034 = "Checking tagged accounts",
		*mlGlMess035 = "Please enter new narrative:",
		*mlGlMess036 = "Display / Print General Ledger Summary Trial Balance",
		*mlGlMess037 = "Journal Total = %lf, must equal 0 to update.",
		*mlGlMess038 = "Cannot manually add new journal for this type.",
		*mlGlMess039 = "This journal was posted.",
		*mlGlMess040 = "No transaction attached.",
		*mlGlMess041 = "Journal Total - (%3.3s) : ",
		*mlGlMess042 = "Prior posting is not allowed.",
		*mlGlMess043 = "Can only delete lines from General, Standing or Accrual Journals.",
		*mlGlMess044 = "Debit   Total - (%3.3s) : ",
		*mlGlMess045 = "Journal Maintenance",
		*mlGlMess046 = "Comment Line",
		*mlGlMess047 = "Last Account: %d/%0*ld",
		*mlGlMess048 = "New Account Number.",
		*mlGlMess049 = "Maintain Account Descriptions",
		*mlGlMess050 = "Credit  Total - (%3.3s) : ",
		*mlGlMess051 = "Lines Available : %03d ",
		*mlGlMess052 = "General Ledger Company Consolidation",
		*mlGlMess053 = "%R Report Generator Program - Report Selection",
		*mlGlMess054 = "%R General Ledger Control File Maintenance ",
		*mlGlMess055 = "Invalid account. Cannot budget on account %-*.*s.",
		*mlGlMess056 = "Couldn't update as account exists.",
		*mlGlMess057 = "Too many X's in format",
		*mlGlMess058 = "Format cannot end with a '-'",
		*mlGlMess059 = "Last Account: %9.9s",
		*mlGlMess060 = "Batch Journals Enquiry Screen",
		*mlGlMess061 = "Account cannot be deleted - balance exists.",
		*mlGlMess062 = "%RGeneral Ledger Account Deletion",
		*mlGlMess063 = "Are you sure that you want this account deleted [Y/N]?",
		*mlGlMess064 = "No batch journal available for this type.",
		*mlGlMess065 = "General Ledger Company Consolidation",
		*mlGlMess066 = "General Ledger Extraction Program - %s",
		*mlGlMess067 = "There is no group to edit.",
		*mlGlMess068 = "%c-Invalid 1st character in name.",
		*mlGlMess069 = "%c-Invalid character in name.",
		*mlGlMess070 = "Only group lines may hold calculations.",
		*mlGlMess071 = "You cannot hide a blank line.",
		*mlGlMess072 = "Bad format for '%s'-use '%s'.",
		*mlGlMess073 = "Operator not supported, must be one of (%s).",
		*mlGlMess074 = "This destroys calculations, initialise first.",
		*mlGlMess075 = "You must first create a format.",
		*mlGlMess076 = "No report has been selected.",
		*mlGlMess077 = "%s spreadsheet does not exist.",
		*mlGlMess078 = "You must first save your account list.",
		*mlGlMess079 = "%RCURRENT LABEL : [%13.13s]",
		*mlGlMess080 = "%RSaving list %s.",
		*mlGlMess081 = "Select : %-51.51s",
		*mlGlMess082 = "%RCreating user spreadsheet.",
		*mlGlMess083 = "%RCreating data spreadsheet for %s.",
		*mlGlMess084 = "%RLoading %s spread-sheet for %s.",
		*mlGlMess085 = "List Name:                                   ",
		*mlGlMess086 = "Title    :                                   ",
		*mlGlMess087 = "%R Using current data.",
		*mlGlMess088 = "%R Using old data. ",
		*mlGlMess089 = "New description :%-*.*s",
		*mlGlMess090 = "%RCreating user spread-sheet for %s.",
		*mlGlMess091 = "%R Using no data. ",
		*mlGlMess092 = "Account %s already has links.",
		*mlGlMess093 = "Account %s is already beneath account %s.",
		*mlGlMess094 = "Year %d cannot hold any balances.",
		*mlGlMess095 = "Account must have a parent before it can have children.",
		*mlGlMess096 = "ACCOUNT BREAKDOWN"  ,
		*mlGlMess097 = "Tagging all accounts.",
		*mlGlMess098 = "Removing link to %s",
		*mlGlMess099 = "Creating link to %s",
		*mlGlMess100 = "Updating General Ledger.",
		*mlGlMess101 = "General Ledger Account Maintenance",
		*mlGlMess102 = "General Ledger Account Display",
		*mlGlMess103 = "Invalid General Account %s found on line %d.",
		*mlGlMess104 = "",
		*mlGlMess105 = "GL Interface Maintenance",
		*mlGlMess106 = "GL Transaction Listing",
		*mlGlMess107 = "Posting accounts must be childless!.  %s is an invalid class.",
		*mlGlMess108 = "Only account 0000000000000000 may be class CC.",
		*mlGlMess109 = "A class %s account cannot have a class %s parent.",
		*mlGlMess110 = "Class %s is invalid for child class of %s on account %s.",
		*mlGlMess111 = ".",
		*mlGlMess112 = "GL_PERIOD =[%d]",
		*mlGlMess113 = "GL_YEAR =[%d] ",
		*mlGlMess114 = "TR_DATE =[%s]",
		*mlGlMess115 = "%R Display/Print General Ledger Transaction Listing",
		*mlGlMess116 = "Adjusting balances.",
		*mlGlMess117 = "Sort field : User Reference ",
		*mlGlMess118 = "Sort field : Transation type",
		*mlGlMess119 = "Sort field : None           ",
		*mlGlMess120 = "Sort field : Narrative      ",
		*mlGlMess121 = "Sorting Transactions.",
		*mlGlMess122 = "Standard Journals",
		*mlGlMess123 = "General Journals",
		*mlGlMess124 = "Accrual Journals",
		*mlGlMess125 = "**** WARNING ONE SIDED JOURNALS ****",
		*mlGlMess126 = "Journal Total = %.2f",
		*mlGlMess127 = "Field cannot be changed as account has not been input.",
		*mlGlMess128 = "INSERT:",
		*mlGlMess129 = "EDIT  :",
		*mlGlMess130 = "CALC: %-*.*s",
		*mlGlMess131 = "Extracting data.",
		*mlGlMess132 = "%RThis will destroy calculations - continue? (Y/N)",
		*mlGlMess133 = "%RWriting user format.",
		*mlGlMess134 = "Posting Batch Journals",
		*mlGlMess135 = "Company is not the consolidation company. See company maintenance.",
		*mlGlMess136 = "Company on consolidated company has not been set up.",
		*mlGlMess137 = "No history is held on this system.",
		*mlGlMess138 = "Level %d greater than maximum (%d).",
		*mlGlMess139 = " HELP - KEY [FN6] ",
		*mlGlMess140 = "Transaction amount must be greater than zero.",
		*mlGlMess141 = "Date before cutoff date %s.",
		*mlGlMess142 = "Batch Number generated %s.",
		*mlGlMess143 = "Not a consolidated company.",
		*mlGlMess144 = "%RInput: F1-Abort, F16-Clear field %s",
		*mlGlMess145 = "Usage %s <jnl_type> <lpno> <pid> ",
		*mlGlMess146 = "Changing account %s to class %c%c%c",
		*mlGlMess147 = "Next account not found.",
		*mlGlMess148 = "Previous account not found.",
		*mlGlMess149 = "Posting accounts must be childless.",
		*mlGlMess150 = "Interface default account maintenance",
		*mlGlMess151 = "Usage : %s <type I(nterface)/C(ode)>",
		*mlGlMess152 = "Usage : %s <lpno> optional <type> <batch_no>",
		*mlGlMess153 = "Usage : %s <GL period 1-12> <GL year - 199x> <transaction date - 01/12/97>",
		*mlGlMess154 = "Usage:  %s <lpno> <pur_status> <R(eceipt)/C(osting)> <Direct Delivery [Y/N]>",
		*mlGlMess155 = "Usage : %s <pid> <journal type [G(eneral)/A(ccrual/S(tandard)/O(ne Sided)]>",
		*mlGlMess156 = "%c Progam %s not in available list.",
		*mlGlMess157 = "%R Standing Journal Maintenance ",
		*mlGlMess158 = "Tagged account has no value to spread.",
		*mlGlMess159 = "Are you sure to delete this consolidated company [Y/N]?",
		*mlGlMess160 = "Invalid level.",
		*mlGlMess161 = "Invalid class.",
		*mlGlMess162 = "Account %s is a posting level account.",
		*mlGlMess163 = "No entry found for spreadsheet.",
		*mlGlMess164 = "G/L Interface Code not on file.",
		*mlGlMess165 = " - History  ",
		*mlGlMess166 = " - Budget %02d",
		*mlGlMess167 = "Display/Print General Ledger Summary Account Listing",
		*mlGlMess168 = "Branch number of %s access denied",
		*mlGlMess169 = "Accounts MUST be the same class type for both 'halves'",
		*mlGlMess170 = "You cannot have a blank Spread-table code.",
		*mlGlMess171 = "No Accounts have been selected.",
		*mlGlMess172 = "No Table has been selected.",
		*mlGlMess173 = "Total spread percentage > 100.00%%.",
		*mlGlMess174 = "Total spread percentage < 100.00%%.",
		*mlGlMess175 = "***** GENERAL LEDGER AUDIT ABOUT TO BE PRINTED *****",
		*mlGlMess176 = "  Please Select printer with lineflow paper loaded.",
		*mlGlMess177 = "Sorry, parent account (%s) is already used in interface code (%s)",
		*mlGlMess178 = "%s Journal (Run number : %s)",
		*mlGlMess179 = "Void General Ledger Batch.",
		*mlGlMess180 = "Standing journals cannot be voided.",
		*mlGlMess181 = "**** VOID BATCH ****",
		*mlGlMess182 = "Account cannot be set to manual as it exists within the G/L interface",
		*mlGlMess183 = "Accounts set to manual should not be used with the interface setup program",
		*mlGlMess184 = "Interface Properties Maintenance",
		*mlGlMess700 = "Usage:  %s <update terminal no> ",
		*mlGlMess701 = "Usage:  %s <journal type> <lpno> ",
		*mlGlMess702 = "Usage:  %s <pid> <lpno> <batch_type>",
		*mlGlMess703 = "Usage:  %s <journal type> <pid> ",
		*mlGlMess704 = "Usage:  %s <lpno> <filename> <print_accs, Y|N> <whole values, Y|N> <budget(1) <budget(2)> <date>",
		*mlGlMess705 = "Usage:  %s <source_dir> <gl_date> <prog_desc> ",
		*mlGlMess706 = "Usage:  %s <file_name> [-p]",
		*mlGlMess707 = "Usage:  %s <journal type> <batch_num> ",
		*mlGlMess708 = " No Accounts Found in Entered Range for your security.";
#endif	