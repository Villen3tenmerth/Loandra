#ifndef MAXPP_INPUTREADER_HPP
#define MAXPP_INPUTREADER_HPP

#include <cstdint>
#include <vector>
#include <iostream>

#include "global.hpp"
#include "cardinalityconstraint.hpp"

namespace maxPreprocessor {
class InputReader {
private:
	int nbvar,nbclauses;

	int readClause(std::istream& input, uint64_t defaultWeight);
	int readHardClause(std::istream& input);
	int readWeightedClause(std::istream& input);
	int readCardinalityConstraint(std::istream& inputF);
	int readLine(std::istream& input);

	int currentLine;
public:
	std::string readError;

	uint64_t top;
	int inputFormat;
	std::vector<std::vector<int> > clauses;
	std::vector<std::vector<uint64_t> > weights;
	std::vector<CardinalityConstraint> cardinalityConstraints;

	int readClauses(std::istream& input, int problemType = 1);  // problemType: 0=sat, 1=maxsat, 2=multiobjective optimization
};
}
#endif
