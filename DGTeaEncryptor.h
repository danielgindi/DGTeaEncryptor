//
//  DGTeaEncryptor.h
//  DGTeaEncryptor
//
//  Created by Daniel Cohen Gindi on 4/3/12.
//  Copyright (c) 2013 Daniel Cohen Gindi. All rights reserved.
//
//  https://github.com/danielgindi/DGTeaEncryptor
//
//  An implementation of the Corrected Block Tiny Encryption Algorithm (XXTEA)
//  
//  The MIT License (MIT)
//  
//  Copyright (c) 2014 Daniel Cohen Gindi (danielgindi@gmail.com)
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE. 
//  

#import <Foundation/Foundation.h>

@interface DGTeaEncryptor : NSObject

+ (NSString *)encrypt:(NSString *)plaintext withPassword:(NSString *)password;
+ (NSString *)decrypt:(NSString *)ciphertext withPassword:(NSString *)password;

@end
