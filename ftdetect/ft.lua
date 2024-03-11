vim.filetype.add {
  pattern = {
    [".*/test/corpus/.*%.txt"] = { "corpus", priority = 10 },
  },
}
