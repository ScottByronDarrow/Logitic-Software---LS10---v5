/*=====================================================================
|  Copyright (C) 1999 - 2000 LogisticSoftware                         |
|=====================================================================|
| $Id: ml_std_mess.h,v 5.3 2001/11/12 08:35:20 scott Exp $
-----------------------------------------------------------------------
| $Log: ml_std_mess.h,v $
| Revision 5.3  2001/11/12 08:35:20  scott
| Updated to add message "Purchase Return"
|
| Revision 5.2  2001/08/06 22:49:52  scott
| RELEASE 5.0
|
| Revision 5.1  2001/07/25 01:01:56  scott
| Updated for 10.5
|
| Revision 5.0  2001/06/19 06:51:45  cha
| LS10-5.0 New Release as of 19 JUNE 2001
|
| Revision 4.1  2001/04/04 08:56:54  scott
| Updated for message changes
|
| Revision 4.0  2001/03/09 00:59:26  scott
| LS10-4.0 New Release as at 10th March 2001
|
| Revision 3.3  2001/03/05 09:36:45  scott
| Updated to correct small lineup problems with LS10-GUI
|
| Revision 3.2  2001/02/01 06:37:54  scott
| Updated to expand our BR.
|
| Revision 3.1  2000/12/12 04:50:05  scott
| Updated to place strings back into include file so plook and other utils work
|
=====================================================================*/
#ifndef	ML_STD_MESS_H
#define	ML_STD_MESS_H

char	*mlStdMess001 = "Item is not on file.",
		*mlStdMess002 = "Alternate Item not found.",
		*mlStdMess003 = "Alternate Item already on file.",
		*mlStdMess004 = "Category is not on file.",
		*mlStdMess005 = "Cannot insert/delete lines on ENTRY.",
		*mlStdMess006 = "Invalid Range.",
		*mlStdMess007 = "No default set.",
		*mlStdMess008 = "MAXLINE exceeded - remaining data ignored.",
		*mlStdMess009 = "No record found.",
		*mlStdMess010 = "Bank Code not found.",
		*mlStdMess011 = "Invalid option.",
		*mlStdMess012 = "Customer      : %s (%s)",
		*mlStdMess013 = "End date must not be later than today's date and not earlier than start date",
		*mlStdMess014 = "Deletion in progress.",
		*mlStdMess015 = "No record to delete.",
		*mlStdMess016 = "Transaction not found.",
		*mlStdMess017 = "Start must be less than end.",
		*mlStdMess018 = "End must be greater than start.",
		*mlStdMess019 = "Start date must not be later than End date.",
		*mlStdMess020 = "Invalid printer.",
		*mlStdMess021 = "Customer not found.",
		*mlStdMess022 = "Supplier not found.",
		*mlStdMess023 = "Supplier Number must be entered.",
		*mlStdMess024 = "Account is not in the General Ledger.",
		*mlStdMess025 = "Account is not a Posting Level Account.",
		*mlStdMess026 = "End date must be greater or equal to start date.",
		*mlStdMess027 = "Issuing Warehouse not found.",
		*mlStdMess028 = "Invalid unit of measure.",
		*mlStdMess029 = "Quantity can only be 1.00 or 0.00 for serial items.",
		*mlStdMess030 = "This item cannot be backordered.",
		*mlStdMess031 = "Is this really a no charge item [Y/N]?",
		*mlStdMess032 = "Cannot delete line - no lines to delete.",
		*mlStdMess033 = "Item is not at this warehouse - create [Y/N]?",
		*mlStdMess034 = "Cannot find receiving branch record for item.",
		*mlStdMess035 = "Please wait.",
		*mlStdMess036 = "Usage: %s <lpno>",
		*mlStdMess037 = "Usage: %s <prog_name> <prog_desc>",
		*mlStdMess038 = "Co  : %s  -  %s ",
		*mlStdMess039 = "Br  : %s  -  %s ",
		*mlStdMess040 = "Currency not found",
		*mlStdMess041 = "Renumbering Lines.",
		*mlStdMess042 = "Any Key to Continue.",
		*mlStdMess043 = "Bank not found.",
		*mlStdMess044 = "Exchange Rate must be greater than zero.",
		*mlStdMess045 = "Done.",
		*mlStdMess046 = "Usage: %s <pid>",
		*mlStdMess047 = "Paragraph not found.",
		*mlStdMess048 = "Purchase order not found.",
		*mlStdMess049 = "Goods Receipt No. not found.",
		*mlStdMess050 = "Shipment not found.",
		*mlStdMess051 = "Tax Code not found.",
		*mlStdMess052 = "Tax Code is not yet effective.",
		*mlStdMess053 = "Employee Code not found.",
		*mlStdMess054 = "Issue Code not found.",
		*mlStdMess055 = "Cost Head not found.",
		*mlStdMess056 = "Job Type Code not found.",
		*mlStdMess057 = "Start Date must be less than End Date.",
		*mlStdMess058 = "End Date must be greater than Start Date.",
		*mlStdMess059 = "WIP Status not found.",
		*mlStdMess060 = "Customer is on stop credit, cannot process any order.",
		*mlStdMess061 = "Customer is over the credit limit, cannot process any order.",
		*mlStdMess062 = "Customer credit terms exceeded by %d period(s).",
		*mlStdMess063 = "Supplier %s %s",
		*mlStdMess064 = "Invalid UOM: Old Products Std UOM",
		*mlStdMess065 = "Invalid UOM: Old Products Alt UOM",
		*mlStdMess066 = "Invalid UOM: New Products Std UOM",
		*mlStdMess067 = "Invalid UOM: New Products Alt UOM",
		*mlStdMess068 = "Date may not be greater than today.",
		*mlStdMess069 = "Contract No. %6.6s   %s",
		*mlStdMess070 = "Cost Head No: %4.4s  %s",
		*mlStdMess071 = "Usage: %s <screen_file>",
		*mlStdMess072 = "Usage: %s <pid> <lpno>",
		*mlStdMess073 = "Branch not found.",
		*mlStdMess074 = "Quality Assurance Code not found.",
		*mlStdMess075 = "Contract not found.",
		*mlStdMess076 = "Cannot insert a line - Table is Full.",
		*mlStdMess077 = "Cheque Type not found.",
		*mlStdMess078 = "No Lodgement Header for this bank.",
		*mlStdMess079 = "Letter of Credit not found.",
		*mlStdMess080 = "No lines to kill.",
		*mlStdMess081 = "Receipt not found.",
		*mlStdMess082 = "Bank Code: %-5.5s",
		*mlStdMess083 = "Bank Name: %-40.40s",
		*mlStdMess084 = "Department not found.",
		*mlStdMess085 = "Dp  : %s  -  %s ",
		*mlStdMess086 = "Start Date may not be greater than current system date.",
		*mlStdMess087 = "Account    : %s",
		*mlStdMess088 = "Job Type not found.",
		*mlStdMess089 = "Contract Description: %-70.70s",
		*mlStdMess090 = "Only %.2f available for part# %s",
		*mlStdMess091 = "",
		*mlStdMess092 = "No lines to release.",
		*mlStdMess093 = "Forward Order",
		*mlStdMess094 = "Backorder",
		*mlStdMess095 = "Customer already charged to Head Office.",
		*mlStdMess096 = "Duplicate customer.",
		*mlStdMess097 = "Serial Number %s is already used.",
		*mlStdMess098 = "Status is %s.",
		*mlStdMess099 = "Wh  : %s  -  %s ",
		*mlStdMess100 = "Warehouse not found.",
		*mlStdMess101 = "Press Window Activate-Key1 for current suppliers and purchase orders on shipment.",
		*mlStdMess102 = "Sales Order not found.",
		*mlStdMess103 = "Transfer No. not found.",
		*mlStdMess104 = "Currency: %-3.3s %-40.40s",
		*mlStdMess105 = "Exchange Rate%9.4f",
		*mlStdMess106 = "Bank:%-3.3s",
		*mlStdMess107 = "Continue [Y/N]?",
		*mlStdMess108 = "Area code not found.",
		*mlStdMess109 = "Letter not found.",
		*mlStdMess110 = "Page: %d",
		*mlStdMess111 = "Please enter correct date.",
		*mlStdMess112 = "Start Date    : %s",
		*mlStdMess113 = "End Date      : %s",
		*mlStdMess114 = "Account No.   : %s %s",
		*mlStdMess115 = "Invoice not found.",
		*mlStdMess116 = "Credit Note not found.",
		*mlStdMess117 = "Lodgement not found.",
		*mlStdMess118 = "Country Code not found.",
		*mlStdMess119 = "Invalid shipment method.",
		*mlStdMess120 = "Discount may not exceed 99.99.",
		*mlStdMess121 = "Is this really a no cost item [Y/N]?",
		*mlStdMess122 = "Order not found.",
		*mlStdMess123 = "Item cannot have quantity zero.",
		*mlStdMess124 = "Duty code not found.",
		*mlStdMess125 = "Does this item really have no volume?",
		*mlStdMess126 = "Does this item really have no weight?",
		*mlStdMess127 = "Dept.  %s - %s",
		*mlStdMess128 = "Journal type not found.",
		*mlStdMess129 = "No company setup in comr.",
		*mlStdMess130 = "Company not found.",
		*mlStdMess131 = "QC Centre not found.",
		*mlStdMess132 = "Invalid Directory.",
		*mlStdMess133 = "All items have been selected.",
		*mlStdMess134 = "Carrier not found.",
		*mlStdMess135 = "Salesperson not found.",
		*mlStdMess136 = "Invalid payment term.",
		*mlStdMess137 = "Invalid shipment method.",
		*mlStdMess138 = "Allocation code not found.",
		*mlStdMess139 = "You are not a valid user.",
		*mlStdMess140 = "Security access denied.",
		*mlStdMess141 = "Date must be today or later.",
		*mlStdMess142 = "Invalid time.",
		*mlStdMess143 = "Invalid filename.",
		*mlStdMess144 = "File already exists.",
		*mlStdMess145 = "File not found.",
		*mlStdMess146 = "Company/Branch not found.",
		*mlStdMess147 = "Company/Branch/Warehouse not found.",
		*mlStdMess148 = "Company/Branch/Department not found.",
		*mlStdMess149 = "Invalid Group Name.",
		*mlStdMess150 = "Group already exists.",
		*mlStdMess151 = "Delete [Y/N]?",
		*mlStdMess152 = "Quotation not found.",
		*mlStdMess153 = "Batch number not found.",
		*mlStdMess154 = "License number not found.",
		*mlStdMess155 = "No supplier inventory record exists.",
		*mlStdMess156 = "Directory : %s",
		*mlStdMess157 = "Killed, returning to menu.",
		*mlStdMess158 = "Maximum lines exceeded.",
		*mlStdMess159 = "Item is not a kit item.",
		*mlStdMess160 = "Item is not a Kit/Phantom item.",
		*mlStdMess161 = "%s lines cannot be %s items.",
		*mlStdMess162 = "%s line cannot be line of itself.",
		*mlStdMess163 = "Reason code not found.",
		*mlStdMess164 = "Business Sector not found.",
		*mlStdMess165 = "Origin not found.",
		*mlStdMess166 = "Position code not found.",
		*mlStdMess167 = "Logname already exists.",
		*mlStdMess168 = "Operator not found.",
		*mlStdMess169 = "All categories have been selected.",
		*mlStdMess170 = "Customer type not found.",
		*mlStdMess171 = "All customer types have been selected.",
		*mlStdMess172 = "All salesmen have been selected.",
		*mlStdMess173 = "All customers have been selected.",
		*mlStdMess174 = "Cannot substitute kit for standard items.",
		*mlStdMess175 = "Freight should be entered.",
		*mlStdMess176 = "No lines to maintain.",
		*mlStdMess177 = "Log to lost sales [Y/N]?",
		*mlStdMess178 = "Error adding branch record.",
		*mlStdMess179 = "Approval Code not found.",
		*mlStdMess180 = "Invalid password.",
		*mlStdMess181 = "Acronym already exists.",
		*mlStdMess182 = "Invalid entry.  Must be 0-999.",
		*mlStdMess183 = "Supplier type code not found.",
		*mlStdMess184 = "Instruction not found.",
		*mlStdMess185 = "Illegal year.",
		*mlStdMess186 = "Account not found.",
		*mlStdMess187 = "Royalty class not found.",
		*mlStdMess188 = "Discount code not found.",
		*mlStdMess189 = "Invalid day of month.",
		*mlStdMess190 = "Illegal quantity.",
		*mlStdMess191 = "Reference no not found.",
		*mlStdMess192 = "Item not found in warehouse.",
		*mlStdMess193 = "Audit File for %s not found.",
		*mlStdMess194 = "Not yet available.",
		*mlStdMess195 = "Invalid transaction month.",
		*mlStdMess196 = "Company was not selected.",
		*mlStdMess197 = "Branch was not selected.",
		*mlStdMess198 = "Warehouse was not selected.",
		*mlStdMess199 = "Batch number already exists.",
		*mlStdMess200 = "Tax number not found.",
		*mlStdMess201 = "Serial number not found.",
		*mlStdMess202 = "Salesperson: %s - %s",
		*mlStdMess203 = "Invalid selling terms.",
		*mlStdMess204 = "Item already exists.",
		*mlStdMess205 = "Status not found.",
		*mlStdMess206 = "Use [SEARCH] to display dot commands.",
		*mlStdMess207 = "Buying group not found.",
		*mlStdMess208 = "Selling group not found.",
		*mlStdMess209 = "Location not found.",
		*mlStdMess210 = "Quote not found.",
		*mlStdMess211 = "No data in selected range.",
		*mlStdMess212 = "Lines not available for editing.",
		*mlStdMess213 = "Address not found.",
		*mlStdMess214 = "Selling Terms not found.",
		*mlStdMess215 = "Issuing co/br/wh cannot be equal to Receiving co/br/wh.",
		*mlStdMess216 = "Receiving warehouse not found.",
		*mlStdMess217 = "Bank-Branch not found. Create [Y/N]?",
		*mlStdMess218 = "Vehicle not found.",
		*mlStdMess219 = "This is a bonus item. It cannot hava a price.",
		*mlStdMess220 = "Category description not found.",
		*mlStdMess221 = "Royalty code not found.",
		*mlStdMess222 = "Invalid customer.  Currency code is different from native currency.",
		*mlStdMess223 = "Duplicate serial no.",
		*mlStdMess224 = "Please wait until you are on the detail lines.",
		*mlStdMess225 = "Please enter full line first then maintain by-products.",
		*mlStdMess226 = "End Date may not be greater than current system date.",
		*mlStdMess227 = "Type not found.",
		*mlStdMess228 = "Enter a non-stock item.",
		*mlStdMess229 = "Date must be greater than today.",
		*mlStdMess230 = "Sale price must be greater than zero.",
		*mlStdMess231 = "Item has a contract price.  Negotiation window not available.",
		*mlStdMess232 = "Account is not a detailed account.",
		*mlStdMess233 = "Code not found.",
		*mlStdMess234 = "This code is assigned to a buying group.",
		*mlStdMess235 = "Item is not a manufactured item.",
		*mlStdMess236 = "Item is not a serial item.",
		*mlStdMess237 = "%s No. %s not found.",
		*mlStdMess238 = "Item %s has been superceded by item %s.",
		*mlStdMess239 = "Duplicate branch",
		*mlStdMess240 = "Duplicate warehouse",
		*mlStdMess241 = "Directory cannot be opened.",
		*mlStdMess242 = "Account not setup for this reason.",
		*mlStdMess243 = "Serial item already sold.",
		*mlStdMess244 = "Usage : %s <description>",
		*mlStdMess245 = "Beginning or End of File.",
		*mlStdMess246 = "Date not within the inventory module month.",
		*mlStdMess247 = "Description : %-40.40s ",
		*mlStdMess248 = "Cannot have cheque date greater than %s.",
		*mlStdMess249 = "Warning : Warehouse not set up with correct picking information.",
		*mlStdMess250 = "Add'l Item Desc : %s",
		*mlStdMess251 = "Sunday",
		*mlStdMess252 = "Monday",
		*mlStdMess253 = "Tuesday",
		*mlStdMess254 = "Wednesday",
		*mlStdMess255 = "Thursday",
		*mlStdMess256 = "Friday",
		*mlStdMess257 = "Saturday",
		*mlStdMess258 = "Invoice Not Posted : Customer with hash (%ld) Missing.",
		*mlStdMess259 = "File name to read:",
		*mlStdMess260 = "January",
		*mlStdMess261 = "February",
		*mlStdMess262 = "March",
		*mlStdMess263 = "April",
		*mlStdMess264 = "May",
		*mlStdMess265 = "June",
		*mlStdMess266 = "July",
		*mlStdMess267 = "August",
		*mlStdMess268 = "September",
		*mlStdMess269 = "October",
		*mlStdMess270 = "November",
		*mlStdMess271 = "December",
		*mlStdMess272 = "NONE",
		*mlStdMess273 = "Yes",
		*mlStdMess274 = "No",
		*mlStdMess275 = "Serial Number %s is already on file with status %s.",
		*mlStdMess276 = "Co: %s-%s / Br: %s-%s / Wh: %s-%s",
		*mlStdMess277 = "Open error (%d) on file %s",
		*mlStdMess278 = "Read error (%d) on file %s",
		*mlStdMess279 = "Lock aborted by user",
		*mlStdMess280 = "Purchase order number required.",
		*mlStdMess281 = "Usage: %s <lpno> or \n%s <lpno> -pc or \n%s <lpno> -pm <co> <br> <wh> <order_no> <req_dte> <req_qte>",
		*mlStdMess282 = "Purchase Return not found.";
#endif	