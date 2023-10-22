#ifndef PROJECT_CALCULATOR_H
#define PROJECT_CALCULATOR_H

namespace project {

class Calculator {
 public:
  Calculator() = default;
  Calculator(const Calculator &) = delete;
  virtual ~Calculator() {};

  virtual int Add(int x, int y);

  virtual int Multiple(int x, int y);
};

} // namespace project

#endif