// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
// Copyright (c) [Year] [Your Name/Organization]. All rights reserved.

#include "ExprAST.h"

int main() {
	BinopPrecedence['<'] = 10;
  	BinopPrecedence['+'] = 20;
  	BinopPrecedence['-'] = 20;
  	BinopPrecedence['*'] = 40;
	codegenprepare;
/* codegenprepare: Optimize for code generation
This pass munges the code in the input function to better prepare it for SelectionDAG-based code generation. 
This works around limitations in its basic-block-at-a-time approach. It should eventually be removed.*/
	return 0;
	
}
