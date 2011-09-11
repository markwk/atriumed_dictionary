<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atriumed_dictionary_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dictionary-blog';
  $context->description = '';
  $context->tag = 'Dictionary';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog_listing:page_1' => 'blog_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'embed_wr_dictionary-0' => array(
          'module' => 'embed_wr_dictionary',
          'delta' => 0,
          'region' => 'right',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dictionary');
  $export['dictionary-blog'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dictionary-book';
  $context->description = '';
  $context->tag = 'Dictionary';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'book_listing:page_1' => 'book_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'embed_wr_dictionary-0' => array(
          'module' => 'embed_wr_dictionary',
          'delta' => 0,
          'region' => 'right',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dictionary');
  $export['dictionary-book'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dictionary-vocab';
  $context->description = '';
  $context->tag = 'Dictionary';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'quizlet' => 'quizlet',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '*/flashcards' => '*/flashcards',
        '*/learn' => '*/learn',
        '*/scatter' => '*/scatter',
      ),
    ),
    'views' => array(
      'values' => array(
        'atriumed_quizlet:page_1' => 'atriumed_quizlet:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'embed_wr_dictionary-0' => array(
          'module' => 'embed_wr_dictionary',
          'delta' => 0,
          'region' => 'right',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dictionary');
  $export['dictionary-vocab'] = $context;

  return $export;
}
