class Test:
  def __init__(self) -> None:
      self.test = 0

  def __str__(self) -> str:
      return str(self.test)

  def __repr__(self) -> str:
      pass



# if within main

if __name__ == "__main__":
  t = Test()

  print(t)

