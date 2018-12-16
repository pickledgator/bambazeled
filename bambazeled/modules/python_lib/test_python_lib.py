#!/usr/bin/env python
import unittest

from bambazeled.modules.python_lib.python_lib import PythonLib

class TestPythonLib(unittest.TestCase):
    def test_constructor(self):
        pl = PythonLib()
        self.assertEqual(pl.get_value(), 0)

    def test_constructor_value(self):
        pl = PythonLib(10)
        self.assertEqual(pl.get_value(), 10)

    # def test_constructor_invalid_value(self):
    #     self.assertRaises(PythonLib(-10))

    def test_increment_by(self):
        pl = PythonLib(10)
        pl.increment_by(10)
        self.assertEquals(pl.get_value(), 20)
        pl.increment_by(100)
        self.assertEquals(pl.get_value(), 120)
        pl.increment_by(-10)
        self.assertEquals(pl.get_value(), 110)

    def test_reset_at_limit(self):
        pl = PythonLib(9900)
        pl.increment_by(150)
        self.assertEqual(pl.get_value(), 150)

if __name__ == '__main__':
    unittest.main()
