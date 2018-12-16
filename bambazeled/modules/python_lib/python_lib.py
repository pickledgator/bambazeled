#!/usr/bin/env python

class PythonLib:
    def __init__(self, init = 0):
        if init < 0:
            raise Exception("Initial value must be positive.")
        self._value = init

    def increment_by(self, value):
      if self._value + value >= 10000:
        self.reset()
      self._value += value

    def reset(self):
        self._value = 0

    def get_value(self):
        return self._value
