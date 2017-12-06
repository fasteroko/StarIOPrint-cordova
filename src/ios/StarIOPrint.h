//
//  StarIOPrint.h
//  CordovaStarIOPlugin
//
//  Created by Vladyslav on 8/23/16.
//
//

#import <Cordova/CDV.h>

@interface StarIOPrint : CDVPlugin

- (void)getAvailablePrintersList:(CDVInvokedUrlCommand *)command;
- (void)connectToPrinter:(CDVInvokedUrlCommand *)command;

- (void)cordovaPOSPrintText:(CDVInvokedUrlCommand *)command;
- (void)cordovaPOSPrintHTMLText:(CDVInvokedUrlCommand *)command;

@end
