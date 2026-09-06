// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
// Copyright (c) [Year] [Your Name/Organization]. All rights reserved.

#include "ExprAST.h"

int main() {
	BinopPrecedence['<'] = 10;
  	BinopPrecedence['+'] = 20;
  	BinopPrecedence['-'] = 20;
  	BinopPrecedence['*'] = 40;
	return 0;

}
